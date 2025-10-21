#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;

        // Iterate over all subarrays
        for (int i = 0; i < n; i++) {
            unordered_set<int> evenSet;
            unordered_set<int> oddSet;

            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0) evenSet.insert(nums[j]);
                else oddSet.insert(nums[j]);

                // Check if balanced
                if (evenSet.size() == oddSet.size()) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
};
