class Solution {
public:
    void back_track(vector<vector<int>>& res, vector<int>& sol, int index, int k, int n) {
        if(n == 0 && sol.size() == k) {
            res.push_back(sol);
        }
        for(int i=index; i<=9; i++) {
            sol.push_back(i);
            back_track(res, sol, i+1, k, n-i);
            sol.pop_back();
        }
        return;
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> sol;
        int index = 1;
        back_track(res, sol, index, k, n);
        return res;
    }
};
