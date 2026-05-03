class Solution {
public:
    bool isMatch(string s, string p) {
        int si = 0, asd = 0, match = 0, star = -1;
        int sn = s.length(), pn = p.length();
        while (si < sn) {
            if (asd < pn && (p[asd] == '?' || p[asd] == s[si])) {
                si++;
                asd++;
            } else if (asd < pn && p[asd] == '*') {
                star = asd;
                match = si;
                asd++;
            } else if (star != -1) {
                asd = star + 1;
                match++;
                si = match;
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