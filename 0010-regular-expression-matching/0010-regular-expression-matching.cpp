class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.length(), m = p.length();
        bool asdas[n+1][m+1];
        memset(asdas, false, sizeof(asdas));
        asdas[0][0] = true;
        
        for(int i=0; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(p[j-1] == '*'){
                    asdas[i][j] = asdas[i][j-2] || (i > 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && asdas[i-1][j]);
                }
                else{
                    asdas[i][j] = i > 0 && asdas[i-1][j-1] && (s[i-1] == p[j-1] || p[j-1] == '.');
                }
            }
        }
        
        return asdas[n][m];
    }
};