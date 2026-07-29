class Solution {
public:
    void powerset(vector<int>& nums, vector<int>& anus, int i, vector<vector<int>>& fs){
        if(i==nums.size()){
            fs.push_back({anus});
            return;
        
        }
        //INCLUDE
        anus.push_back(nums[i]);
        powerset(nums, anus, i+1, fs);

        anus.pop_back(); // BACKTRACKING

        //exclude
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;
        powerset(nums, anus, idx, fs);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> anus;
        vector<vector<int>> finalans;
        powerset(nums, anus, 0, finalans);
        return finalans;
    }
};
