class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            long long hours = 0;
            for (int pile : piles) {
                hours += (pile + mid - 1) / mid; // ceil(pile/mid)
            }
            
            if (hours <= h) {
                ans = mid;      // possible answer
                right = mid - 1; // try smaller
            } else {
                left = mid + 1;  // need bigger speed
            }
        }
        return ans;
    }
};
