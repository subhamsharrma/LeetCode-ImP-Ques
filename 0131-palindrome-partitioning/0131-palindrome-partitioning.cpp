class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path;
        backtrack(s, 0, path, result);
        return result;
    }

private:
    void backtrack(const string& s, int stp, vector<string>& path, vector<vector<string>>& result) {
        // If we've reached the end of the string, add the current partition to the result list
        if (stp == s.length()) {
            result.push_back(path);
            return;
        }
        // Explore all possible partitions
        for (int end = stp + 1; end <= s.length(); ++end) {
            // If the current substring is a palindrome, add it to the current path
            if (isPalindrome(s, stp, end - 1)) {
                path.push_back(s.substr(stp, end - stp));
                // Recur to find other partitions
                backtrack(s, end, path, result);
                // Backtrack to explore other partitions
                path.pop_back();
            }
        }
    }

    bool isPalindrome(const string& s, int left, int right) {
        // Check if the substring s[left:right+1] is a palindrome
        while (left < right) {
            if (s[left++] != s[right--]) {
                return false;
            }
        }
        return true;
    }
};