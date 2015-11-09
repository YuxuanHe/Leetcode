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
    vector<TreeNode*> helper(int start, int end) {
        vector<TreeNode*> res;
        if(start > end) {
            res.push_back(NULL);
            return res;
        }
        for(int i = start; i <= end; i++) {
            vector<TreeNode*> lChildren = helper(start, i-1);
            vector<TreeNode*> rChildren = helper(i+1, end);
            for(TreeNode* lChild : lChildren) {
                for(TreeNode* rChild : rChildren) {
                    TreeNode* root = new TreeNode(i);
                    root->left = lChild;
                    root->right = rChild;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {
        return helper(1,n);
    }
};
