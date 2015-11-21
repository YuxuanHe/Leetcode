class Solution {
public:
    void DFS(vector<vector<char>> &grid, int row, int col) {
        if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size())
            return;
        if(grid[row][col] == '0')
            return;
        grid[row][col] = '0';
        DFS(grid, row-1, col);
        DFS(grid, row+1, col);
        DFS(grid, row, col-1);
        DFS(grid, row, col+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    count++;
                    DFS(grid, i, j);
                }
            }
        }
        return count;
    }
};
