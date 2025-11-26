class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int cnt = 0;

        for (int num = num1; num <= num2; num++) {
            string s = to_string(num);

            // We check all internal digits
            for (int j = 1; j < s.size() - 1; j++) {
                if ((s[j] > s[j-1] && s[j] > s[j+1]) ||
                    (s[j] < s[j-1] && s[j] < s[j+1])) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};
