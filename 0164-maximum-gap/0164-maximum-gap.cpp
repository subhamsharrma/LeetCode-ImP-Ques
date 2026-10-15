class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int differ = 0;
        if(n < 2){
            return 0;
        }
        int i = 0;
        while(i < n-1){
            differ = max(differ, nums[i+1] - nums[i]);
            i++;
        }
        return differ;    
    }
};