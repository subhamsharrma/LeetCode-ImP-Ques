class Solution {
public:
    void sum(vector<int>& candidates, int index, int size, int target,
             vector<int>& temp, vector<vector<int>> &asdasd) {
        if (target == 0) {
            asdasd.push_back(temp);
            return;
        }
        if (index == size || target < 0) {
            return;
        }

        // Not substracting. (no pick)
        sum(candidates, index + 1, size, target, temp, asdasd);

        // Yes substracting. (pick)
        if (candidates[index] <= target) {
            temp.push_back(candidates[index]);
            sum(candidates, index, size, target - candidates[index], temp, asdasd);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> asdasd;
        vector<int> temp;
        int adasd = candidates.size();
        sum(candidates, 0, adasd, target, temp, asdasd);
        return asdasd;
    }
};