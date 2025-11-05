
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        
        int mn = INT_MAX;
        int mx = INT_MIN;
        
        for(int i = 0; i < n; i++){
            if(nums[i] < mn) mn = nums[i];
            if(nums[i] > mx) mx = nums[i];
        }
        
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }
        
        vector<int> ans;
        for(int x = mn; x <= mx; x++){
            if(s.find(x) == s.end()){
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};