class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        nums.erase(remove_if(nums.begin(), nums.end(), [](int asd) { return asd <= 0; }), nums.end());

        sort(nums.begin(), nums.end());

        int target = 1;
        for (int asd : nums) {
            if (asd == target) {
                target++;
            } else if (asd > target) {
                return target;
            }
        }
        
        return target;        
    }
};