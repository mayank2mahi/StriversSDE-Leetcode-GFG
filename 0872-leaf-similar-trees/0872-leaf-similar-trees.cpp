/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void preorder(TreeNode* root, string& s){   //ANY ONE OF THE THREE TRAVERSALS WILL WORK
        if(root == NULL) return;
        
        if(root->left == NULL && root->right == NULL){
            s = s + to_string(root->val) + '_';
            return;
        }
        preorder(root->left, s);
        preorder(root->right, s);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1 = "";
        string s2 = "";
        
        preorder(root1, s1);
        preorder(root2, s2);
        
        return s1 == s2;
    }
};