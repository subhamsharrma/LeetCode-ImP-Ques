class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ; 

        for (int asdasd  = 0; asdasd  < n; asdasd ++) {
             if (nums[asdasd ] == target)
                 return asdasd ;
        }

         return -1;
        
    }
};