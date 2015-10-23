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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return binary_search(0, nums.size()-1, nums);
    }
    TreeNode* binary_search(int start, int end, vector<int>& nums) {
      if(start > end)
        return NULL;
      int mid = (start + end)/2;
      TreeNode* root = new TreeNode(nums[mid]);
      root->left = binary_search(start, mid-1, nums);
      root->right = binary_search(mid+1, end, nums);
      return root;
    }
};
