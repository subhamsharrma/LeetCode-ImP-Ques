class Solution {
public:
    void sum(vector<int>& candidates, int index, int size, int target,
             vector<int>& temp, vector<vector<int>> &ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (index == size || target < 0) {
            return;
        }

        // Not substracting. (no pick)
        sum(candidates, index + 1, size, target, temp, ans);

        // Yes substracting. (pick)
        if (candidates[index] <= target) {
            temp.push_back(candidates[index]);
            sum(candidates, index, size, target - candidates[index], temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        sum(candidates, 0, n, target, temp, ans);
        return ans;
    }
};