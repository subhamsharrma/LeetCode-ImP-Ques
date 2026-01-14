class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1) {
            int sdsd = pq.top(); pq.pop();  // heaviest
            int x = pq.top(); pq.pop();  // second heaviest

            if (sdsd != x) {
                pq.push(sdsd - x);
            }
        }

        if (pq.empty()) return 0;
        return pq.top();
    }
};
