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
    bool isSameTree(TreeNode* p, TreeNode* q) {
      if(p==NULL && q==NULL)
        return true;
      if(p==NULL && q)
        return false;
      if(p && q==NULL)
        return false;
      if(p->val != q->val)
        return false;
      bool  left_subtree = isSameTree(p->left, q->left);
      bool  right_subtree = isSameTree(p->right, q->right);
      if(left_subtree&&right_subtree)
        return true;
      else return false;
    }
};
