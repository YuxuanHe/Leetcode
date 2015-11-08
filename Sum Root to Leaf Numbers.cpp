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
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
			return 0;
		int sol = root->val;
		int sum = 0;
		DFS(root, sol, sum);
		return sum;
    }
	void DFS(TreeNode*root, int sol, int& sum) {
		if(root->left==NULL && root->right==NULL) {
			sum += sol;
			return;
		}
		if(root->left) {
			DFS(root->left, sol*10 + root->left->val, sum);
		}
		if(root->right) {
			DFS(root->right, sol*10 + root->right->val, sum);
		}
		return;
	}
};