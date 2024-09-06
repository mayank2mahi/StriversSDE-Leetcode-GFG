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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // Use a set for faster lookups
        set<int> s(nums.begin(), nums.end());
        
        // Remove nodes from the beginning if their value is in the set
        while(head != NULL && s.find(head->val) != s.end()) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        
        // Now handle the rest of the list
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL) {
            if(s.find(curr->next->val) != s.end()) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
        
        return head;
    }
};
