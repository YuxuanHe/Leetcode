class Solution {
public:
    void back_track(vector<vector<int>> &res, int index, vector<int> nums) {
        if(index == nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int i = index; i<nums.size(); i++) {
            if(i != index && nums[i] == nums[index])
                 continue;
            swap(nums[i], nums[index]);
            back_track(res, index+1, nums);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int index = 0;
        back_track(res, index, nums);
        return res;
    }
};
