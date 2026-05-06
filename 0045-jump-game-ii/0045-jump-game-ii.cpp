class Solution {
public:
    int jump(vector<int>& nums) {
        int near = 0, jar = 0, jumps = 0;

        while (jar < nums.size() - 1) {
            int farthest = 0;
            for (int i = near; i <= jar; i++) {
                farthest = max(farthest, i + nums[i]);
            }
            near = jar + 1;
            jar = farthest;
            jumps++;
        }

        return jumps;        
    }
};