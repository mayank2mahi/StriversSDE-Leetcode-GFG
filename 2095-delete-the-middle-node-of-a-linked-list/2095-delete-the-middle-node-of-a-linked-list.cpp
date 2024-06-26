/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Edge case: if the list is empty or has only one element, return NULL.
        if (head == NULL || head->next == NULL) {
            return NULL;
            delete head;
        }

        // Use two pointers to find the middle of the list.
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node.
        prev->next = slow->next;
        delete slow;

        return head;
    }
};
