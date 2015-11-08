class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> hash_map;
    	for(int i = 0; i < nums.size(); i++) {
    		if(hash_map[nums[i]] > 0)
    			continue;
    		hash_map[nums[i]] =hash_map[nums[i] + hash_map[nums[i]+1]] = hash_map[nums[i] - hash_map[nums[i]-1]] = hash_map[nums[i]-1] + hash_map[nums[i]+1] + 1; 
    	}
    	int max_val = 0;
    	for(auto j = hash_map.begin(); j != hash_map.end(); j++) {
    		max_val = max(max_val, j->second);
    	}
    	return max_val;
    }
};