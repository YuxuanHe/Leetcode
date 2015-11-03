class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i = 0; i < nums.size() - count;) {
            if(nums[i] == val) {
                swap(nums[i], nums[nums.size()-1-count]);
            }
            else {
                i++;
            }
        }
    }
};
