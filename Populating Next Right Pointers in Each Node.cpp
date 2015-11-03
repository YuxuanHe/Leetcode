/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL)
            return;
        helper(root->left, root->right);
    }
    void helper(TreeLinkNode* &node1, TreeLinkNode* &node2) {
        if(node1 == NULL)
            return;
        node1->next = node2;
        helper(node1->left, node1->right);
        helper(node1->right, node2->left);
        helper(node2->left, node2->right);
    }
};
