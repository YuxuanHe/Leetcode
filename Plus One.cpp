class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i = digits.size()-1; i>=0 && carry==1; i--) {
            if(digits[i] == 9) {
                digits[i] = 0;
            }
            else {
                carry = 0;
                digits[i] += 1;
            }
        }
        if(carry == 1) {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};
