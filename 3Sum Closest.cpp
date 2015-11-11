class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int opt_val = nums[0] + nums[1] + nums[2];
        for(int first = 0; first < nums.size() - 2; first++) {
            int second = first + 1;
            int third = nums.size()-1;
            while(second < third) {
                int sum = nums[first] + nums[second] + nums[third];
                opt_val = abs(sum - target) < abs(opt_val - target) ? sum : opt_val ;
                if ( sum == target )
                    return sum;
                else if(sum < target) {
                    second++;
                }
                else {
                    third--;
                }
            }
        }
        return opt_val;
    }
};
