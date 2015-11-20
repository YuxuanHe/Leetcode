class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string first = strs[0];
        int pos = 0;
        string res = "";
        for(int j = 0; j < first.size(); j++) {
            for(int i = 0; i<strs.size(); i++) {
                if(first[pos] != strs[i][pos])
                    return res;
            }
            res = res + first[pos];
            pos++;
        }
        return res;
    }
};
