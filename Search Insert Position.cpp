class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Binary search
        return Binary_Search(0, nums.size()-1, target, nums);
    }
    int Binary_Search(int start, int end, int target, vector<int> nums) {
        while(start <= end) {
          int mid = (start + end) / 2;
          if( nums[mid] == target) {
              return mid;
          }
          else if(nums[mid] < target) {
              start = mid + 1;
          }
          else
              end = mid - 1;
        }
        return start;
    }

};
