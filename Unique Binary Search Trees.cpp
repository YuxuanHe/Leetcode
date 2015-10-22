class Solution {
public:
    int numTrees(int n) {
      if(n==0)
        return 0;
      vector<int> DP(n+1, 0);
      DP[0] = 1;
      DP[1] = 1;
      for(int i = 2; i <= n; i++)
        for(int j = 1; j <= i; j++) {
            DP[i] += DP[j-1] * DP[i-j];
        }
      return DP[n];
    }
};
