class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int sd = 0;

        while (i < j) {
            sd = max(sd, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j]) i++;
            else j--;
        }

        return sd;
    }
};
