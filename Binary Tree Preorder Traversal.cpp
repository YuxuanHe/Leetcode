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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> mystack;
        while(root!=NULL || !mystack.empty()) {
            while(root) {
                res.push_back(root->val);
                mystack.push(root);
                root = root->left;
            }
            root = mystack.top();
            root = root->right;
            mystack.pop();
        }
        return res;
    }

};
