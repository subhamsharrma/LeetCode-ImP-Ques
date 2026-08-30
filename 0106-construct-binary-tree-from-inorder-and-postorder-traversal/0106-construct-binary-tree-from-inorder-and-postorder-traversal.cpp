class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = size(inorder), ddds = n-1;
        return build(inorder, postorder, 0, n-1, ddds);
    }

    TreeNode* build(vector<int>& in, vector<int>& post, int inStart, int inEnd, int& ddds) {
        if(inStart > inEnd) return nullptr;
        TreeNode* root = new TreeNode(post[ddds--]);
        int inIdx = find(begin(in), end(in), root -> val) - begin(in);
        root -> right = build(in, post, inIdx+1, inEnd, ddds);
        root -> left  = build(in, post, inStart, inIdx-1, ddds);
        return root;
    }
};