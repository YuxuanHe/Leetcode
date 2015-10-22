class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
          return false;
        unordered_map<char, int> hash_map;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<s.size(); i++) {
          hash_map[s[i]]++;
          hash_map[t[i]]--;
        }
        for(auto iter = hash_map.begin(); iter != hash_map.end(); iter++) {
          if(iter->second != 0)
            return false;
        }
        return true;

    }
};
