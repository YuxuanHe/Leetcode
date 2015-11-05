class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows == 0)
            return res;
        vector<int> sol(1,1);
        res.push_back(sol);
        for(int i=1; i< numRows; i++) {
            vector<int> sol(1,1);
            for(int j = 0; j < res[i-1].size()-1; j++) {
                sol.push_back(res[i-1][j] + res[i-1][j+1]);
            }
            sol.push_back(1);
            res.push_back(sol);
        }
        return res;
    }
};
