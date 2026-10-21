class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right) {
            int sum1 = numbers[left] + numbers[right];
            if (sum1 == target) {
                return {left + 1, right + 1};
            }
            else if (sum1 < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};