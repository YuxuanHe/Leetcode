class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int res = INT_MIN;
        for(int i = 0; i<nums.size(); i++) {
          if(sum<0)
            sum = 0;
          sum += nums[i];
          res = max(res, sum);
        }
        return res;
    }
};
//[−2,1,−3,4,−1,2,1,−5,4]
