class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int bite = height.size() - 1;
        int leftMax = height[left];
        int asdasd = height[bite];
        int water = 0;

        while (left < bite) {
            if (leftMax < asdasd) {
                left++;
                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];
            } else {
                bite--;
                asdasd = max(asdasd, height[bite]);
                water += asdasd - height[bite];
            }
        }

        return water;        
    }
};