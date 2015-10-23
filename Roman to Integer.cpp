class Solution {
public:
    int romanToInt(string s) {
        //I(1)，V(5)，X(10)，L(50)，C(100)，D(500)，M(1000)   Input is guaranteed to be within the range from 1 to 3999.
        int pre = 0;
        int sum = 0;
        for(int i = s.size()-1; i>=0; i--) {
          int num;
          switch (s[i]) {
            case 'I' : num = 1;
              break;
            case 'V' : num = 5;
              break;
            case 'X' : num = 10;
              break;
            case 'L' : num = 50;
              break;
            case 'C' : num = 100;
              break;
            case 'D' : num = 500;
              break;
            case 'M' : num = 1000;
              break;
          }
          if(pre <= num) {
            sum += num;
          }
          else {
            sum -= num;
          }
          pre = num;
        }
        return sum;
    }
};
