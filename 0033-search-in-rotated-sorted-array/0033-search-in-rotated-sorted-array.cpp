class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ; 

        for (int da = 0; da < n; da++) {
             if (nums[da] == target)
                 return da;
        }

         return -1;
        
    }
};