class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        vector<int> DP(nums.size(), 0);
        DP[0] = nums[0];
        DP[1] = max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++) {
            DP[i] = max((DP[i-2] + nums[i]), DP[i-1]);
        }
        return DP[nums.size()-1];
    }
};
