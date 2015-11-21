class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int min_Len = INT_MAX;
        int sum = 0;
        int start = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while(sum >= s) {
                min_Len = min(min_Len, i - start + 1);
                sum -= nums[start++];
            }
        }
        return min_Len == INT_MAX ? 0 : min_Len;
    }
};
