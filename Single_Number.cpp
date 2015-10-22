class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // a ^ b ^ a = b        a ^ b ^ b = a      bit manipulation
        for(int i=1; i<nums.size(); i++) {
          nums[i] = nums[i]^nums[i-1];
        }
        return nums[nums.size()-1];
    }
};
