class Solution {
public:
    void sortColors(vector<int>& nums) {
        int head = 0;
        int tail = nums.size()-1;
        for(int i=0; i<=tail;i++) {
            while(nums[i] == 2 && i < tail)
                swap(nums[i], nums[tail--]);
            while(nums[i] == 0 && i > head)
                swap(nums[i], nums[head++]);
        }
    }
};
