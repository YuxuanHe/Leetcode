class Solution {
public:
    int majorityElement(vector<int>& nums) {
      // delete two different elements each time
        int i = 0;
        while(nums.size() > 1 && i<nums.size()) {
            if(nums[i] != nums[nums.size()-1]) {
                nums.pop_back();
                nums.erase(nums.begin()+i);
                i = 0;
            }
            else{
                i++;
            }
        }
        return nums[0];
    }
};
