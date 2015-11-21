class Solution {
public:
    vector<string> sort_vector(vector<string>& strs) {
        for(int i = 1; i < strs.size(); i++) {
            for(int j = 0; j < strs.size()-i; j++) {
                if(strs[j] > strs[j+1]) {
                    swap(strs[j], strs[j+1]);
                }
            }
        }
        return strs;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> hash_map;
        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            hash_map[temp].push_back(strs[i]);
        }
        for(auto j = hash_map.begin(); j != hash_map.end(); j++) {
            res.push_back(sort_vector(j->second));
        }
        return res;
    }
};
