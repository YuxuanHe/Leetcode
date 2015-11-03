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
    bool isSymmetric(TreeNode* root) {
      if(root == NULL)
        return true;
      TreeNode* left_child = root->left;
      TreeNode* right_child = root->right;
      return DFS(left_child, right_child);
    }
    bool DFS(TreeNode* left_child, TreeNode* right_child) {
      if(left_child == NULL && right_child == NULL)
        return true;
      else if( (left_child == NULL && right_child != NULL) || (left_child != NULL && right_child == NULL) )
        return false;
      else {
        if(left_child->val != right_child->val)
          return false;
        bool left_res = DFS(left_child->left, right_child->right);
        bool right_res = DFS(left_child->right, right_child->left);
        if(left_res && right_res)
          return true;
        else
          return false;
      }
    }
};
