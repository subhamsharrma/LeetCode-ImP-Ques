class Solution {
public:
    int reverse(int x) {
        long long rev = 0;  // use long long to detect overflow
        
        while (x != 0) {
            int lastDigit = x % 10;     // extract last digit
            rev = rev * 10 + lastDigit; // build reversed number
            
            // move to next digit
            x = x / 10;
        }
        
        // check 32-bit integer overflow
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        
        return (int)rev;
    }
};
