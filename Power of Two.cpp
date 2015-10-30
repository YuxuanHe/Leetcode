class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        int count = 0;
        for(int i = 0; i< 32; i++) {
            if(n & 1)
                count++;
            n = n>>1;
        }
        if(count == 1)
            return true;
        else
            return false;
    }
};
