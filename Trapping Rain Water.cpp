class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        vector<int> max_left(len, 0);
        vector<int> max_right(len, 0);
        for(int i=1; i<len; i++) {
            max_left[i] = max(max_left[i-1], height[i-1]);
            max_right[len-1-i] = max(max_right[len-i], height[len-i]);
        }
        int sum = 0;
        for(int k=0; k<len;k++) {
            sum += max ( min(max_left[k], max_right[k]) - height[k], 0); 
        }
        return sum;
    }
};