class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int mayfifteen2 = 0;

        while (i < j) {
            mayfifteen2 = max(mayfifteen2, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
        }

        return mayfifteen2;
    }
};  
