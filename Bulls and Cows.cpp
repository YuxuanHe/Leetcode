
class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        vector<int> hash_map(10,0);
        for(int i = 0; i < secret.size(); i++) {
            int s = secret[i] - '0';
            int g = guess[i] - '0';
            if(s == g) {
                bulls++;
            }
            else {
                if(hash_map[s] < 0) {
                    // if already exist hash_map[g], where g == c, but in different position
                    cows++;
                }
                if(hash_map[g] > 0) {
                    cows++;
                }
                hash_map[s]++;
                hash_map[g]--;
            }
        }
        return  to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
