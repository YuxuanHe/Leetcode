class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string sol;;
        int left = 0;
        int right = 0;
        back_track(left, right, n, sol, res);
        return res;
    }
    void back_track (int &left, int &right, int n, string sol, vector<string> &res) {
    //back_track
    	if(left == n) {
    		string temp(n-right, ')');
    		sol = sol + temp;
    		res.push_back(sol);
    		return;
    	}
    	if(left >= right) {
    	    left++;
    	    back_track(left, right, n, sol + '(', res);
    	    left--;
    	    right++;
    	    back_track(left, right, n, sol + ')', res);
    	    right--;
    	}
    }
};