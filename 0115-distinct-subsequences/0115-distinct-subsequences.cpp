class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size(), n = t.size();
        vector<vector<unsigned long long>> bp(m + 1, vector<unsigned long long>(n + 1, 0));
        for (int i = 0; i <= m; i++) bp[i][0] = 1;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == t[j - 1])
                    bp[i][j] = bp[i - 1][j - 1] + bp[i - 1][j];
                else
                    bp[i][j] = bp[i - 1][j];
            }
        }
        return bp[m][n];
    }
};