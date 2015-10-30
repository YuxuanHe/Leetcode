class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max_aera = 0;
        while(left < right) {
            int cur_aera = min(height[left], height[right]) * (right - left);
            if(cur_aera > max_aera) {
                max_aera = cur_aera;
            }
            if(height[left] < height[right])
                left ++;
            else
                right --;
        }
        return max_aera;
    }
};
