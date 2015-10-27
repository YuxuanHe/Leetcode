class Solution {
public:
   void back_tra(int index, vector<int> nums, vector<vector<int>> &res) {
		if(index == nums.size()) {
			res.push_back(nums);
		}
		for(int i = index; i<nums.size(); i++) {
			swap(nums[i], nums[index]);
			back_tra(index+1, nums, res);
			swap(nums[i], nums[index]);
		}
   }  
    vector<vector<int>> permute(vector<int>& nums) {
    	vector<vector<int>> res;
    	int index = 0;
    	back_tra(index, nums, res);
    	return res;   
    }
};