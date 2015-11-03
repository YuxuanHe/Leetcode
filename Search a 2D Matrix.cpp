class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix.size() * matrix[0].size() - 1;
        return bin_sear(matrix, start, end, target);
    }
    bool bin_sear(vector<vector<int>> matrix, int start, int end, int target) {
      if(start > end)
        return false;
      int mid = (start + end) / 2;
      int value = matrix[mid/matrix[0].size()][mid%matrix[0].size()];
      if( value == target) {
        return true;
      }
      else if( value < target ) {
        return bin_sear(matrix, mid + 1, end, target);
      }
      else {
        return bin_sear(matrix, start, mid - 1, target);
      }
    }
};
