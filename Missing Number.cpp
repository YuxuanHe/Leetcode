class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int nums_size = nums.size();
      int total_sum = (nums_size * (nums_size+1) ) / 2;
      int array_sum = 0;
      for(int i=0; i<nums.size(); i++) {
        array_sum += nums[i];
      }
      total_sum -= array_sum;
      return total_sum;
    }
};
