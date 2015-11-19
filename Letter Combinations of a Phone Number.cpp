class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> hash_map;
        hash_map['0'] = "";
        hash_map['1'] = "";
        hash_map['2'] = "abc";
        hash_map['3'] = "def";
        hash_map['4'] = "ghi";
        hash_map['5'] = "jkl";
        hash_map['6'] = "mno";
        hash_map['7'] = "pqrs";
        hash_map['8'] = "tuv";
        hash_map['9'] = "wxyz";
        vector<string> res;
        if(digits.size() == 0) {
            return res;
        }
        string sol;
        int index = 0;
        back_track(res, hash_map, digits, sol, index);
        return res;
    }
    void back_track(vector<string> &res, unordered_map<char, string> hash_map, string digits, string &sol, int index) {
        if(sol.size() == digits.size()) {
            res.push_back(sol);
            return;
        }
        for(int i = index; i < digits.size(); i++) {
            for(int j = 0; j < hash_map[digits[i]].size(); j++) {
                sol.push_back(hash_map[digits[i]][j]);
                back_track(res, hash_map, digits, sol, i+1);
                sol.pop_back();
            }
        }
    }
};
