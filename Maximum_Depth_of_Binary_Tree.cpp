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
    int maxDepth(TreeNode* root) {
      //using dfs       Divide and Conquer
      if(root==NULL)
        return 0;
      int left_subtree  = maxDepth(root->left) + 1;
      int right_subtree = maxDepth(root->right) + 1;
      return max(left_subtree,right_subtree);
    }
};
