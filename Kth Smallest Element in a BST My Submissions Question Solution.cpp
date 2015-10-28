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
    void DFS(TreeNode* root, int &k, int& ele_val) {
        if(root == NULL)
            return;
        DFS(root->left, k,ele_val);
        k--;
        if(k==0) {
            ele_val = root->val;
            return;
        }
        DFS(root->right, k, ele_val);
    }
    int kthSmallest(TreeNode* root, int k) {
       int ele_val = INT_MAX;
       DFS(root, k, ele_val);
       return ele_val;
    }
};
