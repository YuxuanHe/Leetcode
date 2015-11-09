class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> sol;
        int index = 0;
        helper(res, sol, candidates, index, target);
        return res;
    }
    void helper(vector<vector<int>> &res, vector<int> sol, vector<int> candidates, int index, int target) {
        if(target == 0) {
            res.push_back(sol);
            return;
        }
        if(target < 0) {
            return;
        }
        for(int i = index; i < candidates.size(); i++) {
            sol.push_back(candidates[i]);
            helper(res, sol, candidates, i, target - candidates[i]);
            sol.pop_back();
        }
        return;
    }
};
