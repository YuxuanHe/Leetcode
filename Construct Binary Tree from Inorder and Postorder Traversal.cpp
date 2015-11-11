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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
    }
    TreeNode* helper(vector<int>& preorder, int start_pre, int end_pre, vector<int>& inorder, int start_in, int end_in) {
        if(start_pre > end_pre || start_in > end_in) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[start_pre]);
        int root_pos = -1;
        for(int i = start_in; i <= end_in; i++) {
            if(inorder[i] == preorder[start_pre])
                root_pos = i;
        }
        if(root_pos == -1)
            return NULL;
        int leftTreeSize = root_pos - start_in;
        int rightTreeSize = end_in - root_pos;
        root->left = helper(preorder, start_pre+1, start_pre+leftTreeSize, inorder, start_in, root_pos-1);
        root->right = helper(preorder, end_pre - rightTreeSize + 1, end_pre, inorder, root_pos+1, end_in);
        return root;
    }
};
