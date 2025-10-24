#include <unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) return true; // duplicate found
            seen.insert(num);                 // remember the number
        }
        return false;
    }
};
