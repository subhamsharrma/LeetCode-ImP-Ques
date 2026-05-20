class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int mayfifteen7 = 0;

        while (i < j) {
            mayfifteen7 = max(mayfifteen7, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
        }

        return mayfifteen7;
    }
};  
