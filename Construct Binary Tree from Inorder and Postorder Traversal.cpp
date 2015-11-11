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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }
    TreeNode* helper(vector<int>& inorder, int start_in, int end_in, vector<int>& postorder, int start_pos, int end_pos) {
        if(start_in > end_in || start_pos > end_pos) {
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[end_pos]);
        int rootIndex = -1;
        for(int i = start_in; i <= end_in; i++) {
            if(inorder[i] == postorder[end_pos]) {
                rootIndex = i;
                break;
            }
        }
        if(rootIndex == -1)
            return NULL;
        int leftTreeSize = rootIndex - start_in;
        int rightTreeSize = end_in - rootIndex;

        root->left = helper(inorder, start_in, rootIndex -1, postorder, start_pos, start_pos + leftTreeSize - 1);
        root->right = helper(inorder, rootIndex+1, end_in, postorder, end_pos - rightTreeSize, end_pos-1);
        return root;
    }
};
