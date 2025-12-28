class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        
        vector<long long> arr(n);
        arr[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            arr[i] = min(arr[i + 1], (long long)nums[i]);
        }

        long long sum = 0;
        long long ans = LLONG_MIN;

        for (int i = 0; i < n - 1; i++) {
            sum += nums[i];
            ans = max(ans, sum - arr[i + 1]);
        }

        return ans;
    }
};
