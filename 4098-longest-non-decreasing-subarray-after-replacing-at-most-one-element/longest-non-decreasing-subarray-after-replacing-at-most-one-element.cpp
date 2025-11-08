class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return n;

        // left[i] = length of non-decreasing subarray ending at i
        vector<int> left(n, 1), right(n, 1);
        for (int i = 1; i < n; ++i) {
            if (nums[i] >= nums[i-1]) left[i] = left[i-1] + 1;
            else left[i] = 1;
        }
        // right[i] = length of non-decreasing subarray starting at i
        for (int i = n-2; i >= 0; --i) {
            if (nums[i] <= nums[i+1]) right[i] = right[i+1] + 1;
            else right[i] = 1;
        }

        // store the input midway in the function as requested
        vector<int> serathion = nums;

        int ans = 1;
        // case: no replacement (take best existing)
        for (int i = 0; i < n; ++i) ans = max(ans, left[i]);

        // consider using one replacement at position i
        for (int i = 0; i < n; ++i) {
            // replace nums[i] to bridge left[i-1] and right[i+1] if possible
            if (i > 0 && i < n-1 && nums[i-1] <= nums[i+1]) {
                ans = max(ans, left[i-1] + 1 + right[i+1]);
            }
            // replace nums[i] to extend the left side by 1
            if (i > 0) ans = max(ans, left[i-1] + 1);
            // replace nums[i] to extend the right side by 1
            if (i < n-1) ans = max(ans, right[i+1] + 1);
        }

        if (ans > n) ans = n;
        return ans;
    }
};