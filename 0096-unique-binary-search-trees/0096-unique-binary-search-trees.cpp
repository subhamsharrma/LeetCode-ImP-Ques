class Solution {
public:
    int numTrees(int n) {
        vector<int> uniqTree(n + 1, 1);

        for (int nodes = 2; nodes <= n; nodes++) {
            int final = 0;
            for (int root = 1; root <= nodes; root++) {
                final += uniqTree[root - 1] * uniqTree[nodes - root];
            }
            uniqTree[nodes] = final;
        }

        return uniqTree[n];        
    }
};