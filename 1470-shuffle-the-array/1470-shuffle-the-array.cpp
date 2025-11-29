class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int left = 0 ; 
        int right = n ; 
        vector<int>ans ; 

        while (left < n && right < 2*n ) {
            ans.push_back(nums[left]);
            ans.push_back(nums[right]); 
            left++ ; 
            right++ ;
            
        } 

        return ans ; 
        
    }
};