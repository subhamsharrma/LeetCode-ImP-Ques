class Solution {
    unordered_map<string, vector<int>> memo;

public:
    vector<int> minDifference(int n, int k) {
        return dfs(n, k);
    }

    vector<int> dfs(int n, int k) {
        string key = to_string(n) + "|" + to_string(k);
        if (memo.count(key)) return memo[key];

        // Base case: if only one factor left, return n itself
        if (k == 1) return {n};

        int minDiff = INT_MAX;            // best difference found so far
        vector<int> bestFactors;          // best factorization array

        // Try every divisor i of n
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                int quotient = n / i;

                // Recursively factorize quotient into (k-1) parts
                vector<int> remainingFactors = dfs(quotient, k - 1);

                // Build new factorization including current divisor i
                vector<int> currentFactors;
                currentFactors.push_back(i);
                currentFactors.insert(currentFactors.end(),
                                      remainingFactors.begin(),
                                      remainingFactors.end());

                // Sort to easily compute min and max factor
                sort(currentFactors.begin(), currentFactors.end());
                int diff = currentFactors.back() - currentFactors.front();

                // Keep track of the factorization with the minimum difference
                if (diff < minDiff) {
                    minDiff = diff;
                    bestFactors = currentFactors;
                    //best split found then stop
                    if(minDiff==0) break;
                }
            }
        }

        return memo[key] = bestFactors;
    }
};
