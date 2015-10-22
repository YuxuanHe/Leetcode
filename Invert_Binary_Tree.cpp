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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
          return NULL;
        if(root->left==NULL && root->right==NULL)
          return root;
        TreeNode* left_subtree = invertTree(root->left);
        TreeNode* right_subtree = invertTree(root->right);
        root->right = left_subtree;
        root->left = right_subtree;
        return root;
    }
};
