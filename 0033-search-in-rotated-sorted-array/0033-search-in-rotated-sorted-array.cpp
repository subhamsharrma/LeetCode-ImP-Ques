class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ; 

        for (int i = 0; i < n; i++) {
            // Check if the current element is the target
            if (nums[i] == target)
                // Return the index if the target is found
                return i;
        }

        // Return -1 if the target is not found
        return -1;
        
    }
};