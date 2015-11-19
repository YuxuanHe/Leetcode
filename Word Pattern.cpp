class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> hash_map_1;
        unordered_map<string, char> hash_map_2;
        vector<string> words;
        string temp = "";
        for(int j = 0; j < str.size() ; j++) {
            if(str[j] == ' ') {
                words.push_back(temp);
                temp = "";
            }
            else {
                temp = temp + str[j];
            }
        }
        words.push_back(temp);
        if(pattern.size() != words.size())
            return false;
        for(int i = 0; i < pattern.size(); i++) {
            if(hash_map_1.find(pattern[i]) == hash_map_1.end()) {
                hash_map_1[pattern[i]] = words[i];
            }
            else if(hash_map_1[pattern[i]] != words[i]) {
                return false;
            }
            if(hash_map_2.find(words[i]) == hash_map_2.end()) {
                hash_map_2[words[i]] = pattern[i];
            }
            else if(hash_map_2[words[i]] != pattern[i]) {
                return false;
            }
        }
        return true;
    }
};
