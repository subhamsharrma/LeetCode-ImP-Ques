#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        long long total = accumulate(nums.begin(), nums.end(), 0LL);
        int n = nums.size();
        
        double avg = (double)total / n;
        
        int candidate = floor(avg) + 1;
        
        while (true) {
            // check if candidate exists in nums (O(n) loop)
            bool present = false;
            for (int val : nums) {
                if (val == candidate) {
                    present = true;
                    break;
                }
            }
            if (!present && candidate > 0) return candidate;
            candidate++;
        }
    }
};
