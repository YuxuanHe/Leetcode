class Solution {
public:
  void moveZeroes(vector<int>& nums) {
      int count = 0;
      for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 0)
          count++;
        else
          nums[i - count] = nums[i];
      }
      for(int j = 0; j<count; j++) {
        nums[nums.size()-1-j] = 0;
      }
  }
};
