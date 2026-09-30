class Solution {
public:
    int ans = INT_MIN;

    int campounder(TreeNode* node) {
        if (!node) return 0;
        int left = max(campounder(node->left), 0);
        int right = max(campounder(node->right), 0);
        ans = max(ans, node->val + left + right);
        return node->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        campounder(root);
        return ans;
    }
};