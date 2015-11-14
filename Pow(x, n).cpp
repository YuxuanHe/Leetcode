class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n < 0) {
            if(n == INT_MIN)
                return myPow(1/x, INT_MAX)*x;
            else
                return myPow(1/x, -n);
        }
        if((n&1) == 0) {
            return myPow(x*x,n/2);
        }
        else {
            return x*myPow(x*x,n/2);
        }
    }
};
