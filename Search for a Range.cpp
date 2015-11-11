class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lpos = -1;
        int rpos = -1;
        vector<int> res(2,-1);
        int start = 0;
        int end = nums.size()-1;
        while(start <= end) {
            int mid = (start + end)/2;
            if(nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid-1;
            }
        }
        if(nums[start] == target)
            lpos = start;
        else return res;
        start = 0;
        end = nums.size()-1;
        while(start <= end) {
            int mid = (start + end)/2;
            if(nums[mid] > target) {
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        rpos = end;
        res[0] = lpos;
        res[1] = rpos;
        return res;
    }
};
