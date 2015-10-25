class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> hash_map;
        return helper(n, hash_map);
    }
    bool helper(int n, unordered_map<int, bool> &hash_map) {
    	if(n == 1)
    		return true;
    	else if(hash_map.find(n) != hash_map.end())
    		return false;
    	else {
    		hash_map.emplace(n, true);
    		int new_num = 0;
    		while(n) {
    			new_num += pow((n%10),2);
    			n = n/10;
    		}
    		helper(new_num, hash_map);
    	} 
    }
};