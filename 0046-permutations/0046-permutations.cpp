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

        for (int asd = start; asd < nums.size(); asd++) {
            swap(nums[start], nums[asd]);
            backtrack(nums, start + 1, res);
            swap(nums[start], nums[asd]);
        }
    }
    
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }    
};