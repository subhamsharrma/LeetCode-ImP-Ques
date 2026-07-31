class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0') {
            return 0;
        }

        int n = s.length();
        vector<int> bp(n + 1, 0);
        bp[0] = bp[1] = 1;

        for (int i = 2; i <= n; i++) {
            int one = s[i - 1] - '0';
            int two = stoi(s.substr(i - 2, 2));

            if (1 <= one && one <= 9) {
                bp[i] += bp[i - 1];
            }
            if (10 <= two && two <= 26) {
                bp[i] += bp[i - 2];
            }
        }

        return bp[n];        
    }
};