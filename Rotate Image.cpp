class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int len = matrix.size();
      rotate_by_x_axis(matrix, len);
      rotate_by_diagonal(matrix, len);
    }
    void rotate_by_x_axis(vector<vector<int>>& matrix, int len) {
      for(int i = 0; i < len/2; i++) {
        swap(matrix[i], matrix[len-1-i]);
      }
    }
    void rotate_by_diagonal(vector<vector<int>>& matrix, int len) {
      for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
          swap(matrix[i][j],matrix[j][i]);
        }
      }
    }
};
