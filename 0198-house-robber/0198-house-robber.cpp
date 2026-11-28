class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }

        vector<int> dpp(n, 0);

        dpp[0] = nums[0];
        dpp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dpp[i] = max(dpp[i - 1], nums[i] + dpp[i - 2]);
        }

        return dpp[n - 1];        
    }
};