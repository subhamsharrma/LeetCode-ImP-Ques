class Solution {
public:
    long long reflect(long long x) {
        string b = bitset<64>(x).to_string();
        b.erase(0, b.find_first_not_of('0'));  // remove leading zeros

        reverse(b.begin(), b.end());           // reverse the binary string

        long long val = 0;
        for (char c : b) {
            val = val * 2 + (c - '0');         // convert back to integer
        }
        return val;
    }

    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            long long ra = reflect(a);
            long long rb = reflect(b);

            if (ra == rb) return a < b; // tie → sort by original number
            return ra < rb;             // otherwise sort by reflection
        });

        return nums;
    }
};
