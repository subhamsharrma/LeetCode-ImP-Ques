class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int mayfifteen6 = 0;

        while (i < j) {
            mayfifteen6 = max(mayfifteen6, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
        }

        return mayfifteen6;
    }
};  
