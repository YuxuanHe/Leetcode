class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      int aXORb = 0;
      for(int i=0; i<nums.size(); i++) {
        aXORb ^= nums[i];
      }
      int right_most_bit_is_one = aXORb ^ (aXORb-1) & aXORb;
      int first = 0;
      int second = 0;
      for(int j=0; j<nums.size(); j++) {
        if(nums[j] & lastbit)
          first ^= nums[i];
        else
          second ^= nums[i];
      }
      vector<vector<int>> res;
      res.push_back(first);
      res.push_back(second);
    }
};
