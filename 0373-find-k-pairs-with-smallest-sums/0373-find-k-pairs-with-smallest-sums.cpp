// class Solution {
// public:
//     vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

//         vector<pair<int, pair<int,int>>> all;  // {sum, {i, j}}

//         // 1. Generate all pairs
//         for (int i = 0; i < nums1.size(); i++) {
//             for (int j = 0; j < nums2.size(); j++) {
//                 int sum = nums1[i] + nums2[j];
//                 all.push_back({sum, {i, j}});
//             }
//         }

//         // 2. Sort by sum
//         sort(all.begin(), all.end());

//         // 3. Take first k

//         vector<vector<int>> ans;
//         for (int t = 0; t < min(k, (int)all.size()) ; t++) {
//             int i = all[t].second.first;
//             int j = all[t].second.second;
//             ans.push_back({nums1[i], nums2[j]});
//         }

//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int,int>>> pq; // max-heap

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {

                int sum = nums1[i] + nums2[j];

                if (pq.size() < k) {
                    pq.push({sum, {i, j}});
                }
                else if (sum < pq.top().first) {
                    pq.pop();
                    pq.push({sum, {i, j}});
                }
                else {
                    // since nums2 is sorted, further j will only increase sum
                    break;
                }
            }
        }

        vector<vector<int>> ans;
        while (!pq.empty()) {
            auto p = pq.top(); pq.pop();
            int i = p.second.first;
            int j = p.second.second;
            ans.push_back({nums1[i], nums2[j]});
        }

        return ans;
    }
};
