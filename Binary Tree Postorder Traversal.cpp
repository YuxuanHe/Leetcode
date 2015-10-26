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
    vector<int> postorderTraversal(TreeNode* root) {
        // left->right->root       root->right->left
        vector<int> res;
        stack<TreeNode*> my_stack;
        while(root || !my_stack.empty()){
            while(root) {
                res.push_back(root->val);
                my_stack.push(root);
                root = root->right;
            }
            root = my_stack.top();
            my_stack.pop();
            root = root->left;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
