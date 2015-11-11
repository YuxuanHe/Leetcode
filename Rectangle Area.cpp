class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int top = min(D,H);
        int bottom = max(B,F);
        int left = max(A,E);
        int right = min(C,G);
        int length = right > left ? right - left : 0;
        int width = top > bottom ? top - bottom : 0;
        return (D-B)*(C-A) + (H-F)*(G-E) - length * width;
    }
};
