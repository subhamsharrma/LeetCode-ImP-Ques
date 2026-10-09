class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(q.size()) {
            auto [n, curi] = q.front(); q.pop();
            curi = curi * 10 + n -> val;
            if(n -> left) q.push({n -> left, curi});      
            if(n -> right) q.push({n -> right, curi});
            if(!n -> left && !n -> right) sum += curi;   // add to total sum if we are at leaf node
        }
        return sum;
    }
};