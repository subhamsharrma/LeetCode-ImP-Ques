class Solution {
public:
    using ll = long long;

    long long maxProduct(vector<int>& a) {
        int n = a.size();
        
        // Edge case: we need at least 2 numbers for pairs
        if (n < 2) return 0; 

        sort(a.begin(), a.end());  // sort ascending

        ll ans = LLONG_MIN;

        // Case 1: two largest numbers * +100000
        ans = max(ans, (ll)a[n-1] * a[n-2] * 100000LL);

        // Case 2: smallest * largest * -100000
        ans = max(ans, (ll)a[0] * a[n-1] * -100000LL);

        // Case 3: two smallest * +100000
        ans = max(ans, (ll)a[0] * a[1] * 100000LL);

        return ans;
    }
};
