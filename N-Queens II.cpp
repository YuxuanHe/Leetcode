class Solution {
public:
    bool check_exist(int row, int col, vector<int> queens) {
    int num = 0;
    for(int i=0; i<row; i++) {
        if( queens[i] == col || abs(queens[i] - col) == abs(i - row) )
            return true;
    }
    return false;
}

void back_track(int n, int row,  int & count, vector<int>& queens) {
    if(row == n) {
        count++;
        return;
    }

    for(int col = 0; col < n; col++) {
        if(!check_exist(row, col, queens)) {
            queens[row] = col;
            back_track(n, row+1, count, queens);
            queens[row] = -1;
        }
    }
}

int totalNQueens(int n) {
    vector<int> queens(n, -1);
    int count = 0;
    back_track(n, 0, count, queens);
    return count;
}

};
