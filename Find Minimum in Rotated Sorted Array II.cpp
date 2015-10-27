class Solution {
public:
    int bin_sear(int start, int end, vector<int> nums) {
        int mid = (start+end)/2;
        if(start == end) {
            return nums[mid];
        }
        if(nums[mid] < nums[end])
            return bin_sear(start, mid, nums);
        else if(nums[mid] > nums[end])
            return bin_sear(mid+1, end, nums);
        else
            return bin_sear(start, end-1, nums);
    }
    int findMin(vector<int>& nums) {
        return bin_sear(0, nums.size()-1, nums);
    }
};
