class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        int index = 0;
        int first = 1;
        vector<vector<int>> res;
        vector<int> sol;
        backtrack(res, sol, index, n, k, first);
        return res;
    }
    void backtrack(vector<vector<int>> &res, vector<int> &sol, int index, int n, int k, int first) {
        if(index == k) {
            res.push_back(sol);
        }
        for(int i=first; i<=n; i++) {
            sol.push_back(i);
            backtrack(res, sol, index+1, n, k, i+1);
            sol.pop_back();
        }
    }
};
