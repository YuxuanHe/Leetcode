class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> hash_table;
        for(int i=0; i<nums.size(); i++) {
          if(hash_table.find(nums[i]) != hash_table.end())
            return true;
          else
            hash_table.emplace(nums[i],true);
        }
        return false;
    }
};
