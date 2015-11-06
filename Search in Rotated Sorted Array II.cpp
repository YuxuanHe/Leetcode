class Solution {
public:
    bool bi_search(vector<int>& nums, int target, int start, int end) {
        int mid = (start + end)/2;
        if(nums[mid]==target)
            return true;
        if(start>=end)
            return false;
        if(nums[mid] > nums[end]) {
            if((nums[mid]>target)&&(target>=nums[start]))
                return bi_search(nums, target, start, mid-1);
            else
                return bi_search(nums, target, mid+1, end);
        }
        else if(nums[mid] < nums[end])
        {
            if((nums[mid]<target)&&(target<=nums[end]))
                return bi_search(nums, target, mid+1, end);
            else
                return bi_search(nums, target, start, mid-1);
        }
        else {
            return bi_search(nums, target, start, end-1);
        }
    }
    bool search(vector<int>& nums, int target) {
        return bi_search(nums, target, 0, nums.size()-1);
    }
};
