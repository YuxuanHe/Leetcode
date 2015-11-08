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
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int min_val = INT_MAX;
        int path = 1;
        helper(root, min_val, path);
        return min_val;
    }
    void helper(TreeNode* root, int& min_val, int path) {
        if(root->left == NULL && root->right == NULL) {
            min_val = min(min_val, path);
        }
        if(root->left) {
            helper(root->left, min_val, path+1);
        }
        if(root->right) {
            helper(root->right, min_val, path+1);
        }
    }
};
