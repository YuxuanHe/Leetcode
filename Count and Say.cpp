class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        for(int i = 1; i<n; i++) {
            string temp = "";
            char pre = str[0];
            int count = 1;
            for(int j = 1; j < str.size(); j++) {
                if(pre == str[j]) {
                    count++;
                }
                else{
                    char num = count + '0';
                    temp = temp + num + pre;
                    pre = str[j];
                    count = 1;
                }
            }
            char num = count + '0';
            temp = temp + num + pre;
            str = temp;
        }
        return str;
    }
};
