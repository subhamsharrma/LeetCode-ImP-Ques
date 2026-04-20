class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> nes;

        vector<int> comb;
        dfs(candidates, target, 0, comb, nes);
        return nes;        
    }

    void dfs(vector<int>& candidates, int target, int start, vector<int>& comb, vector<vector<int>>& nes) {
        if (target < 0) {
            return;
        }
    
        if (target == 0) {
            nes.push_back(comb);
            return;
        }
    
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i-1]) {
                continue;
            }
            
            if (candidates[i] > target) {
                break;
            }
            
            comb.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i + 1, comb, nes);
            comb.pop_back();
        }
    }
};