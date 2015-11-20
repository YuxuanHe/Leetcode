class Solution {
public:
    void helper(vector<vector<int>> &res, vector<int> &sol, int index, vector<int> candidates, int target) {
        if(target == 0) {
            res.push_back(sol);
            return;
        }
        for(int i = index; i < candidates.size(); i++) {
            if(target <= 0 || (i != index && candidates[i] == candidates[i-1]))
                continue;
            sol.push_back(candidates[i]);
            helper(res, sol, i+1, candidates, target - candidates[i]);
            sol.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int sum = 0;
        int index = 0;
        vector<vector<int>> res;
        vector<int> sol;
        helper(res, sol, index, candidates, target);
        return res;
    }
};
