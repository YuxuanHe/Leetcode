class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        unordered_map<string, vector<int>> hash_map;
        return helper(input, hash_map);
    }
    vector<int> helper(string input, unordered_map<string, vector<int>> &hash_map) {
        vector<int> total_res;
        for(int i=1; i<input.size()-1; i++) {
            if(input[i] > '9' || input[i] < '0') {
                // is not number
                string l_str = input.substr(0,i);
                string r_str = input.substr(i+1);
                vector<int> l_res;
                vector<int> r_res;
                if(hash_map.find(l_str) != hash_map.end()) {
                    l_res = hash_map[l_str];
                }
                else {
                    l_res =  helper(l_str, hash_map);
                }

                if(hash_map.find(r_str) != hash_map.end()) {
                    r_res = hash_map[r_str];
                }
                else {
                    r_res =  helper(r_str, hash_map);
                }
                //permuatation
                for(int j = 0; j < l_res.size(); j++) {
                    for(int k = 0; k < r_res.size(); k++) {
                        int cal_res;
                        switch(input[i]){
                            case '+':
                                cal_res = l_res[j] + r_res[k];
                                break;
                            case '-':
                                cal_res = l_res[j] - r_res[k];
                                break;
                            case '*':
                                cal_res = l_res[j] * r_res[k];
                                break;
                            default:
                                cal_res = 0;
                                break;
                        }
                        total_res.push_back(cal_res);
                    }
                }
                hash_map[input] = total_res;
            }
        }
        if(total_res.empty()) {
            total_res.push_back(stoi(input));
        }
        return total_res;
    }
};
