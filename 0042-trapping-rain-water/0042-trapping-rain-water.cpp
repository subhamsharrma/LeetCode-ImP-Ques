class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int leftMax = height[left];
        int asdasd = height[right];
        int water = 0;

        while (left < right) {
            if (leftMax < asdasd) {
                left++;
                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];
            } else {
                right--;
                asdasd = max(asdasd, height[right]);
                water += asdasd - height[right];
            }
        }

        return water;        
    }
};