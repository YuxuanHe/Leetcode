class Solution {
public:
    int count_neighbors(vector<vector<int>> board, int pos_x, int pos_y) {
        int row = board.size();
        int col = board[0].size();
        int count = 0;
        int top = max(0, pos_x - 1);
        int bot = min(row - 1, pos_x + 1);
        int left = max(0, pos_y - 1);
        int right = min(col - 1, pos_y + 1);
        for(int i = top; i <= bot; i++) {
            for(int j = left; j <= right; j++) {
                count = count + (board[i][j]&1);
            }
        }
        count = count - (board[pos_x][pos_y]&1);
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                int nei_num = count_neighbors(board, i, j);
                if( (nei_num == 2 && (board[i][j]&1)) || nei_num == 3)
                    board[i][j] = board[i][j] | 2;
            }
        }
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                board[i][j] = board[i][j]>>1;
            }
        }
    }
};
