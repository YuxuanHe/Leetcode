/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> mystack;
        while(root != NULL || !mystack.empty()) {
            while(root) {
                mystack.push(root);
                root = root->left;
            }
            root = mystack.top();
            mystack.pop();
            res.push_back(root->val);
            root = root->right;
        }
        return res;
    }
};
