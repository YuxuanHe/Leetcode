/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* save = head;
        int len = 0;
        while(save) {
            save = save->next;
            len++;
        }
        return helper(head, 0, len-1);
    }
    TreeNode* helper(ListNode* &head, int start, int end) {
        if(start > end) {
            return NULL;
        }
        int mid = (start + end) >> 1;
        TreeNode* lChild = helper(head, start, mid-1);
        TreeNode* root = new TreeNode(head->val);
        head = head->next;
        TreeNode* rChild = helper(head, mid+1, end);
        root->left = lChild;
        root->right = rChild;
        return root;
    }
};
