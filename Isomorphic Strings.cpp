class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> hash_map_1, hash_map_2;
        if(s.size() != t.size())
            return false;
        for(int i = 0; i < s.size(); i++) {
            if(hash_map_1.find(s[i]) == hash_map_1.end()) {
                hash_map_1[s[i]] = t[i];
            }
            else if(hash_map_1[s[i]] != t[i]) {
                return false;
            }
            if(hash_map_2.find(t[i]) == hash_map_2.end()) {
                hash_map_2[t[i]] = s[i];
            }
            else if(hash_map_2[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
};
