// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         vector<int> rows(n,0);
//         vector<vector<int>> tables(m,rows);
//         for(int i=0; i<m; i++) {
//             tables[i][0] = 1;
//         }
//         for(int j=0; j<n; j++) {
//             tables[0][j] = 1;
//         }
//         for(int i = 1; i < m; i++) {
//             for(int j = 1; j < n; j++) {
//                 tables[i][j] = tables[i-1][j] + tables[i][j-1];
//             }
//         }
//         return tables[m-1][n-1];
//     }
// };

// Another Solution
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m>n) swap(m,n);
        vector<int> dp(n, 1);
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                dp[j] += dp[j-1];
            }
        }
        return dp[m-1];
    }
};
