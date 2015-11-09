class Solution {
public:
    void helper(vector<int> nums, int len, vector<vector<int>>& res) {
        if(len == nums.size())
            return;
        int temp_len = res.size();
        for(int i=0; i<temp_len; i++) {
            vector<int> temp = res[i];
            temp.push_back(nums[len]);
            res.push_back(temp);
        }
        helper(nums, len+1, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res = {{}};
        sort(nums.begin(), nums.end());
        helper(nums, 0, res);
        return res;
    }
};
