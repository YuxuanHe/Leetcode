class Solution {
public:
    int numSquares(int n) {
        vector<int> DP(n+1, 0);
        for(int i = 1; i <= n; i++) {
            DP[i] = i;
        }
        for(int j = 2; j <= n; j++) {
            for(int k = 1; k <= sqrt(j); k++) {
                DP[j] = min(DP[j], DP[j-k*k] + 1);
            }
        }
        return DP[n];
    }
};
