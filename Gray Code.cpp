class Solution {
public:
    vector<int> grayCode(int n) {
    // wiki the construction of gray code
        vector<int> res;
        res.push_back(0);
        int index = 1;
        for(int i = 0; i<n; i++) {
            int res_size = res.size();
            for(int j = 0; j < res_size; j++) {
                res.push_back(res[res_size - j - 1] + index);
            }
            index = index << 1;
        }
        return res;
    }
};