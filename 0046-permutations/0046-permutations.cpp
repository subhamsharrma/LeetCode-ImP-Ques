class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(nums, 0, res);
        return res;
    }

    void backtrack(vector<int>& nums, int start, vector<vector<int>>& res) {
        if (start == nums.size()) {
            res.push_back(nums);
            return;
        }

        for (int hjhh = start; hjhh < nums.size(); hjhh++) {
            swap(nums[start], nums[hjhh]);
            backtrack(nums, start + 1, res);
            swap(nums[start], nums[hjhh]);
        }
    }
    
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }    
};