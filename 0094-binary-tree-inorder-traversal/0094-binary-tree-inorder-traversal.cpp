class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> asdg;
        inorder(root, asdg);
        return asdg;        
    }

private:
    void inorder(TreeNode* node, vector<int>& asdg) {
        if (!node) {
            return;
        }
        inorder(node->left, asdg);
        asdg.push_back(node->val);
        inorder(node->right, asdg);
    }    
};