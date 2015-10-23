class Solution {
public:
    int findMin(vector<int>& nums) {
      return binary_search(0, nums.szie()-1, nums);
    }
    int binary_search(int start, int end, vector<int> &nums) {
      if(start > end)
        return nums[end];
      int mid = (start + end)/2;
      if(nums[end] > nums[mid]) {
        return binary_search(start, mid-1, nums);
      }
      else{
        return binary_search(mid+1, end, nums);
      }
    }
};
