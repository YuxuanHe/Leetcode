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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path_p;
        vector<TreeNode*> path_q;
        if(find_path(root, p, path_p) && find_path(root, q, path_q)) {
            TreeNode* res;
            for(int i = 0; i<min(path_p.size(), path_q.size()); i++) {
                if(path_p[i] != path_q[i])
                    break;
                else
                    res = path_p[i];
            }
            return res;
        }
        else {
            return NULL;
        }
    }
    bool find_path(TreeNode* root, TreeNode* target, vector<TreeNode*>& path) {
        if(root == NULL)
            return false;
        path.push_back(root);
        if(root == target)
            return true;
        if(find_path(root->left, target, path))
            return true;
        if(find_path(root->right, target, path))
            return true;
        path.pop_back();
        return false;
    }
};
