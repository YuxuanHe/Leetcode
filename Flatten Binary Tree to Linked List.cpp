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
    void flatten(TreeNode* root) {
        while(root != NULL) {
			if(root->left != NULL) {
				TreeNode* lChild = root->left;
				while(lChild->right != NULL) {
					lChild = lChild->right;
				} 
				lChild->right = root->right;
				root->right = root->left;
				root->left = NULL;
			}
			root = root->right;
		}
    }
};