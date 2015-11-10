class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // important!   must be (i/3)*3 + j/3 not i+j/3
        vector<vector<bool>> row(9,vector<bool>(9,false));
        vector<vector<bool>> col(9,vector<bool>(9,false));
        vector<vector<bool>> box(9,vector<bool>(9,false));
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    int num = board[i][j] - '0';
                    if(row[i][num-1] || col[j][num-1] || box[(i/3)*3+j/3][num-1])
                        return false;
                    else
                        row[i][num-1] = col[j][num-1] = box[(i/3)*3+j/3][num-1] = true;
                }
            }
        }
        return true;
    }
};
