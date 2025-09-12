class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mpp;

        int sum = 0;

        for (int num : nums) {
            mpp[num]++;
        }

        for (auto& p : mpp) {
            if (p.second == 1) {
                sum += p.first;
            }
        }
        return sum;
    }
};
