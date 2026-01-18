class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans = {-1, -1};
        int bestQuality = -1;

        for (int i = 0; i < towers.size(); i++) {
            int x = towers[i][0];
            int y = towers[i][1];
            int q = towers[i][2];

            int dist = abs(x - center[0]) + abs(y - center[1]);

            if (dist <= radius) { // reachable
                if (q > bestQuality ||(q == bestQuality && 
                   (ans[0] == -1 || x < ans[0] || (x == ans[0] && y < ans[1])))) {
                    
                    bestQuality = q;
                    ans[0] = x;
                    ans[1] = y;
                }
            }
        }
        return ans;
    }
};
