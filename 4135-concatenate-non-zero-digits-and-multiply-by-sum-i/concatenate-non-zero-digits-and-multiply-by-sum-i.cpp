class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long sum = 0, v = 0;
        for(int i = 0; i < s.length(); ++i) {
            int c = s[i] - '0';
            if(c > 0) {
                sum += c;
                v =  v * 10 + c;
            }
        }
        return sum * v;
        
    }
};