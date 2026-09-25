class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        vector<int> memoa = triangle[row-1];

        for (int r = row-2; r >= 0; r--) {
            for (int c = 0; c <= r; c++) {
                memoa[c] = min(memoa[c], memoa[c+1]) + triangle[r][c];
            }
        }

        return memoa[0];        
    }
};