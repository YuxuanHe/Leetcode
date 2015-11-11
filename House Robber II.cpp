class Solution {
public:
    int rob(vector<int>& nums) {
        // two case : nums[0] included or not
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        if(nums.size() == 2)
            return max(nums[0], nums[1]);
        if(nums.size() == 3)
            return max(max(nums[0],nums[1]), nums[2]);
        // included
        vector<int> DP_1(nums.size(), 0);
        DP_1[2] = nums[2];
        DP_1[3] = max(nums[2], nums[3]);
        for(int i = 4; i < nums.size()-1; i++) {
            DP_1[i] = max((nums[i] + DP_1[i-2]), DP_1[i-1]);
        }
        int sum_1 = DP_1[nums.size()-2] + nums[0];

        // not included
        vector<int> DP_2(nums.size(), 0);
        DP_2[1] = nums[1];
        DP_2[2] = max(nums[1],nums[2]);
        for(int j = 3; j<nums.size(); j++) {
            DP_2[j] = max((nums[j] + DP_2[j-2]), DP_2[j-1]);
        }
        int sum_2 = DP_2[nums.size()-1];
        return max(sum_1, sum_2);
    }
};
