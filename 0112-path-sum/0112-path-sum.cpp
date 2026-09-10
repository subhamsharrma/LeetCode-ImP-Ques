class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSums) {
        if (!root) return false;

        if (!root->left && !root->right) {
            return targetSums - root->val == 0;
        }

        targetSums -= root->val;

        return hasPathSum(root->left, targetSums) || hasPathSum(root->right, targetSums);        
    }
};