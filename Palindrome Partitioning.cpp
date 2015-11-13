class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> sol;
        int index = 0;
        back_track(res, sol, s, index);
    }
    void back_track(vector<vector<string>> &res, vector<string> sol, string s, int index) {
        if(index == s.size()) {
            res.push_back(sol);
            return;
        }
        for(int i = index; i < s.size(); i++) {
            string new_str = s.substr(index, i - index + 1);
            if(helper(new_str)) {
                sol.push_back(new_str);
                back_track(res, sol, s, index+1);
                sol.pop_back();
            }
        }
    }
    bool helper(string s){
        int start = 0;
        int end = s.size()-1;
        while(start <= end) {
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
};
