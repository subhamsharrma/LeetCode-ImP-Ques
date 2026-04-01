class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> aaaa;
        aaaa.push(-1);
        int as = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                aaaa.push(i);
            } else {
                aaaa.pop();
                if (aaaa.empty()) {
                    aaaa.push(i);
                } else {
                    as = max(as, i - aaaa.top());
                }
            }
        }

        return as;        
    }
};