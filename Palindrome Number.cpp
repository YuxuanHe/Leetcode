class Solution {
public:
    bool isPalindrome(int x) {
		// it convert to reverse integer
		int new_one = 0;
		int old_one = x;
		while(old_one > 0) {
			new_one = new_one*10 + old_one%10;
			old_one /= 10;
		}
		return new_one == x;
    }
};