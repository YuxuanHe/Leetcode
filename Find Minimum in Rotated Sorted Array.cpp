class Solution {
public:
  int binary_search(int start, int end, vector<int> &nums) {
    int mid = (start + end)/2;
    if(start == end)
        return nums[mid];
    if(nums[end] > nums[mid]) {
        return binary_search(start, mid, nums);
    }
    else{
        return binary_search(mid+1, end, nums);
    }
  }

  int findMin(vector<int>& nums) {
    return binary_search(0, nums.size()-1, nums);
  }
};
