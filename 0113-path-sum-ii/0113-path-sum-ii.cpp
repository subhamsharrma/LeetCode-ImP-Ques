class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(root, targetSum, 0, path, res);
        return res;
    }

    void dfs(TreeNode* node, int targetSum, int curSuma,
             vector<int>& path, vector<vector<int>>& res) {
        if (!node) return;

        curSuma += node->val;
        path.push_back(node->val);

        if (!node->left && !node->right && curSuma == targetSum) {
            res.push_back(path);
        }

        dfs(node->left, targetSum, curSuma, path, res);
        dfs(node->right, targetSum, curSuma, path, res);

        path.pop_back();
    }
};