class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;
        while (i > 0 && nums[i-1] >= nums[i]) {
            i--;
        }
        
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int s = nums.size() - 1;
        while (s >= i && nums[s] <= nums[i-1]) {
            s--;
        }
        
        swap(nums[i-1], nums[s]);
        reverse(nums.begin() + i, nums.end());        
    }
};