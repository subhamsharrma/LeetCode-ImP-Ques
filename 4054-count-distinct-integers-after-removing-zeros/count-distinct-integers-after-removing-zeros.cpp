class Solution {
public:
    long long countDistinct(long long n) {
        long long fendralis = n;   // store input midway
        
        string s = to_string(fendralis);
        int d = s.size();
        
        // Precompute powers of 9
        vector<long long> pow9(d+1, 1);
        for (int i = 1; i <= d; i++)
            pow9[i] = pow9[i-1] * 9;
        
        long long ans = 0;
        
        // 1) Add all zero-free numbers with fewer digits
        for (int len = 1; len < d; len++)
            ans += pow9[len];
        
        // 2) Count zero-free numbers with the same number of digits as n
        for (int i = 0; i < d; i++) {
            int digit = s[i] - '0';
            
            // digits allowed: 1..9, and strictly < current digit
            int options = 0;
            for (int x = 1; x <= 9; x++)
                if (x < digit) options++;
            
            ans += options * pow9[d - i - 1];
            
            // If current digit is 0 → no further matching possible
            if (digit == 0)
                return ans;
        }
        
        // 3) If no zero in n, count n itself
        ans += 1;
        
        return ans;
    }
};
