class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        int countEb = 0;   // count of 'e' or 'E'
        int countD = 0;   // count of '.'
        int countN = 0;   // count of digits before exponent
        int countAE = 0;  // count of digits after exponent

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') countD++;
            if (s[i] == 'e' || s[i] == 'E') countEb++;
            if (isdigit(s[i])) {
                if (countEb) countAE++;
                else countN++;
            }
            // sign validation
            if ((s[i] == '+' || s[i] == '-') && i != 0 && (s[i - 1] != 'e' && s[i - 1] != 'E')) 
                return false;
            // invalid alphabet
            else if (isalpha(s[i]) && (s[i] != 'e' && s[i] != 'E')) 
                return false;
            // multiple '.' or 'e'
            else if (countD > 1 || countEb > 1) 
                return false;
            // '.' cannot appear after 'e'
            else if (s[i] == '.' && countEb) 
                return false;
            // 'e'/'E' cannot be at beginning or end
            else if ((i == 0 || i == n - 1) && (s[i] == 'e' || s[i] == 'E')) 
                return false;
            // single '.' cannot be both start and end
            else if (i == 0 && i == n - 1 && s[i] == '.') 
                return false;
            // 'e/E' must follow at least one digit
            else if ((s[i] == 'e' || s[i] == 'E') && !countN) 
                return false;
        }
        // validate digit presence
        if ((countEb && !countAE) || !countN) return false;
        return true;
    }
};
