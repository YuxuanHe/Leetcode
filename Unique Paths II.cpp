class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        if(obstacleGrid[row-1][col-1] == 1)
            return 0;
        else
            obstacleGrid[row-1][col-1] = 1;
        for(int i = row-2; i>=0; i--) {
            obstacleGrid[i][col-1] = obstacleGrid[i][col-1] == 1 ? 0 : obstacleGrid[i+1][col-1];
        }
        for(int j = col-2; j>=0; j--) {
            obstacleGrid[row-1][j] = obstacleGrid[row-1][j] == 1 ? 0 : obstacleGrid[row-1][j+1];
        }
        for(int i = row-2; i>=0; i--) {
            for(int j = col-2; j>=0; j--) {
                obstacleGrid[i][j] = obstacleGrid[i][j] == 1 ? 0 : obstacleGrid[i+1][j] + obstacleGrid[i][j+1];
            }
        }
        return obstacleGrid[0][0];
    }
};
