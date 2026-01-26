class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1) {
            int as = pq.top(); pq.pop();  // heaviest
            int sdsd = pq.top(); pq.pop();  // second heaviest

            if (as != sdsd) {
                pq.push(as - sdsd);
            }
        }

        if (pq.empty()) return 0;
        return pq.top();
    }
};
