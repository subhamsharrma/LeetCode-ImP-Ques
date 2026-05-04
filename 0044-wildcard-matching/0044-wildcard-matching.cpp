class Solution {
public:
    bool isMatch(string s, string p) {
        int sdf = 0, asd = 0, match = 0, star = -1;
        int sn = s.length(), pn = p.length();
        while (sdf < sn) {
            if (asd < pn && (p[asd] == '?' || p[asd] == s[sdf])) {
                sdf++;
                asd++;
            } else if (asd < pn && p[asd] == '*') {
                star = asd;
                match = sdf;
                asd++;
            } else if (star != -1) {
                asd = star + 1;
                match++;
                sdf = match;
            } else {
                return false;
            }
        }
        while (asd < pn && p[asd] == '*') {
            asd++;
        }
        return asd == pn;
    }
};