class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size() == 0 || triangle[0].size() == 0)
            return 0;
        int num_row = triangle.size();
        vector<int> DP(num_row, INT_MAX);
        DP[0] = triangle[0][0];
        int min_sum = DP[0];
        for(int i = 1; i < num_row; i++) {
            min_sum = INT_MAX;
            for(int j = i; j >= 0; j--) {
                int left = j >= 1 ? (j-1) : 0;
                int right = j < i ? j : i-1;
                DP[j] = min(DP[right],DP[left]) + triangle[i][j];
                min_sum = min(min_sum, DP[j]);
            }
        }
        return min_sum;
    }
};
