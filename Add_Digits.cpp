class Solution {
public:
    int addDigits(int num) {
          //0 = 0 1 = 1 2 = 2 3 =3 4 = 4 ......... 9 = 9 10 = 1 11 = 2..........18  = 9 19 = 1 20 = 2 21 = 3.........27 = 9 28 = 1
          if(num == 0)
            return 0;
          else if(num % 9)
            return num%9;
          else
            return 9;
    }
};
