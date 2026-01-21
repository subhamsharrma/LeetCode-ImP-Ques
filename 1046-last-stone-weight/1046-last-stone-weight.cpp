class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1) {
            int change = pq.top(); pq.pop();  // heaviest
            int x = pq.top(); pq.pop();  // second heaviest

            if (change != x) {
                pq.push(change - x);
            }
        }

        if (pq.empty()) return 0;
        return pq.top();
    }
};
