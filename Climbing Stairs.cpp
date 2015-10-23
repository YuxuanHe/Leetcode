class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
          return n;
        int first  = 1;
        int second = 2;
        while( n > 2) {
          int temp  = second;
          second = first + second;
          first = temp;
          n--;
        }
        return second;
    }
};
