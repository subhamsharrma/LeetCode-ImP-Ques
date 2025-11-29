class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        // vector<int>ans(nums.begin() , nums.end() );
        
        ans = nums ; 

        for (int copying : nums) {
            ans.push_back(copying) ; 
        }
        return ans ; 
        
    }
};