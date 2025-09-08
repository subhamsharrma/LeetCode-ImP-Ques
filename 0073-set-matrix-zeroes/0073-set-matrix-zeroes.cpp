class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> copy = matrix; // O(mn) space

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    // zero out row i
                    for(int col = 0; col < n; col++) 
                        copy[i][col] = 0;
                    // zero out col j
                    for(int row = 0; row < m; row++) 
                        copy[row][j] = 0;
                }
            }
        }
        
        matrix = copy;
        
    }
};