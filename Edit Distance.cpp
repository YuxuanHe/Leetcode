class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> DP(word1.size()+1, vector<int> (word2.size()+1, 0));
        for(int i = 1; i<=word1.size(); i++) {
            DP[i][0] = i;
        }
        for(int j = 1; j <= word2.size(); j++) {
            DP[0][j] = j;
        }
        for(int i = 1; i<=word1.size(); i++) {
            for(int j=1; j<=word2.size(); j++) {
                if(word1[i-1] == word2[j-1]) {
                    DP[i][j] = DP[i-1][j-1];
                }
                else {
                    DP[i][j] = min(min(DP[i-1][j] + 1, DP[i][j-1] + 1), DP[i-1][j-1] + 1);
                }
            }
        }
        return DP[word1.size()][word2.size()];
    }
};
