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
        
        int asd = nums.size() - 1;
        while (asd >= i && nums[asd] <= nums[i-1]) {
            asd--;
        }
        
        swap(nums[i-1], nums[asd]);
        reverse(nums.begin() + i, nums.end());        
    }
};