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
    bool isBalanced(TreeNode* root) {

    }
    int len_node(TreeNode* root) {
      if(root == NULL)
        return 0;
      int len_left_subtree = len_subtree(root->left);
      int len_right_subtree = len_subtree(root->right);
      if(abs(len_right_subtree - len_left_subtree) > 1)
        return -1;
      else
        return max(len_left_subtree, len_right_subtree) + 1;
    }
};
