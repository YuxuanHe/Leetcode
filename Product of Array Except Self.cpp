class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> res(nums.size(),1);
      int factor = 1;
      for(int i = 0; i< nums.size(); i++) {
        res[i] = factor;
        factor *= nums[i];
      }
      factor = 1;
      for(int i = nums.size() -1; i >= 0; i--) {
        res[i] *= factor;
        factor *= nums[i];
      }
      return res;
    }
};
