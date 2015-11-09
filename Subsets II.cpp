class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res = {{}};
        int index = 0
        helper(res, nums, index);
        return res;
    }
    void helper(vector<vector<int>> &res, vector<int> nums, int index) {
        if(index == nums.size()) {
            return;
        }
        int vec_len = res.size();
        for(int i = 0; i < vec_len; i++) {
            for(int j = index; j<nums.size(); j++) {
                if(res[i].back() != nums[index]) {
                    vector<int> temp = res[i].push_back(nums[index]);
                    res.push_back(temp);
                }
            }
        }
        helper(res, nums, index + 1);
    }
};
