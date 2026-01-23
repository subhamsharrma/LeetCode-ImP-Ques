class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1) {
            int as = pq.top(); pq.pop();  // heaviest
            int e = pq.top(); pq.pop();  // second heaviest

            if (as != e) {
                pq.push(as - e);
            }
        }

        if (pq.empty()) return 0;
        return pq.top();
    }
};
