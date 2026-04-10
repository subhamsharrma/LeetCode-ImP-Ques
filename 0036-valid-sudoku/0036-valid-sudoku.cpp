class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> aaa[9];
        unordered_set<char> ad[9];

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                char value = board[r][c];
                int boxIndex = (r / 3) * 3 + (c / 3);

                if (rows[r].count(value) || aaa[c].count(value) || ad[boxIndex].count(value)) {
                    return false;
                }

                rows[r].insert(value);
                aaa[c].insert(value);
                ad[boxIndex].insert(value);
            }
        }

        return true;        
    }
};