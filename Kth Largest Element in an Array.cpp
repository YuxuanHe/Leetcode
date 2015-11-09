class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int start = 0;
        int end = nums.size()-1;
        return helper(start, end, nums, k);
    }
    int helper(int start, int end, vector<int>& nums, int k) {
        int lp = start;
        int rp = end;
        int key = nums[start];
        while(lp < rp) {
            while(nums[rp] <= key && lp < rp)
                rp--;
            while(nums[lp] >= key && lp < rp)
                lp++;
            swap(nums[lp],nums[rp]);
        }
        if( lp == (k-1) )
            return key;
        swap(nums[start],nums[lp]);
        if(lp > k-1)
            return helper(start, lp-1, nums, k);
        if(lp < k-1)
            return helper(rp+1, end, nums, k);
    }
};
