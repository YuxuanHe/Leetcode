class Solution {
public:
    int singleNumber(vector<int>& nums) {
      // 00 -> 01 -> 10 -> 00
        int higher_bit = 0;
        int lower_bit = 0;
        for(int i=0; i<nums.size(); i++) {
          lower_bit = (lower_bit^nums[i]) & ~higher_bit;
          higher_bit = (higher_bit^nums[i]) & ~lower_bit;
        }
        return lower_bit;
    }
};
