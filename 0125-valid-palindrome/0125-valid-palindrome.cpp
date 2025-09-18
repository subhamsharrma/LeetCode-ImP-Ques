class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        
        // keep only alphanumeric and make lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleaned.push_back(tolower(c));
            }
        }
        
        int left = 0, right = cleaned.size() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
