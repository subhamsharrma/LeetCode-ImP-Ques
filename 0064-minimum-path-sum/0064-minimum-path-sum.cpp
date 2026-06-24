class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int mt = grid.size();
        int n = grid[0].size();
        
        for (int i = 1; i < mt; i++) {
            grid[i][0] += grid[i-1][0];
        }
        
        for (int j = 1; j < n; j++) {
            grid[0][j] += grid[0][j-1];
        }
        
        for (int i = 1; i < mt; i++) {
            for (int j = 1; j < n; j++) {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        
        return grid[mt-1][n-1];
    }
};
