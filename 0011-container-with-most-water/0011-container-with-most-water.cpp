class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int mayfifteen8 = 0;

        while (i < j) {
            mayfifteen8 = max(mayfifteen8, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
        }

        return mayfifteen8;
    }
};  
