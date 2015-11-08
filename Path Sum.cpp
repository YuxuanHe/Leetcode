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
    bool hasPathSum(TreeNode* root, int sum) {
		if(root == NULL)
			return false;
        if(sum == root->val && root->left == NULL && root->right == NULL)
			return true;
		bool left_res = hasPathSum(root->left, sum - root->val);
		bool right_res = hasPathSum(root->right, sum - root->val);
		if(left_res || right_res)
			return true;
		else 
			return false;
    }
};