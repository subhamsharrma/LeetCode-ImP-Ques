class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int mayfifteen4 = 0;

        while (i < j) {
            mayfifteen4 = max(mayfifteen4, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
        }

        return mayfifteen4;
    }
};  
