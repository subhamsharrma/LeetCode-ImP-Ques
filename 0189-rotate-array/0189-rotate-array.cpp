class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // in case k >= n

        reverse(nums.begin(), nums.end());         // Step 1: reverse entire array
        reverse(nums.begin(), nums.begin() + k);   // Step 2: reverse first k elements
        reverse(nums.begin() + k, nums.end());     // Step 3: reverse remaining elements
    }
};