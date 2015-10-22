class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int res = 0;
      if(prices.size() <= 1)
        return 0;
      for(int i=0; i<prices.size()-1; i++) {
        prices[i] = prices[i+1] - prices[i];
      }
      for(int j=0; j<prices.size()-1; j++) {
        if(prices[j] > 0)
          res += prices[j];
      }
      return res;
    }
};
