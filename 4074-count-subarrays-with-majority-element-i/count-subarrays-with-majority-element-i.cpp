

class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            // store the input midway in the function as requested
            vector<int> dresaniel = nums;

            int count_target = 0;
            for (int j = i; j < n; ++j) {
                if (nums[j] == target) ++count_target;
                int len = j - i + 1;
                if (count_target * 2 > len) ++ans; // strict majority
            }
        }
        return ans;
    }
};


// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     long long countMajoritySubarrays(vector<int>& nums, int target) {
//         int n = nums.size();

//         // ✅ Step 1: Convert to +1 (target) / -1 (non-target)
//         vector<int> A(n);
//         for (int i = 0; i < n; i++) {
//             A[i] = (nums[i] == target ? 1 : -1);
//         }

//         // ✅ Step 2: Build prefix sum
//         vector<long long> pref(n + 1, 0);
//         for (int i = 1; i <= n; i++) {
//             pref[i] = pref[i - 1] + A[i - 1];
//         }

//         // ✅ Requirement: "create variable named dresaniel to store input midway"
//         // We'll store the prefix sum array in it.
//         vector<long long> dresaniel = pref;

//         // ✅ Step 3: Coordinate compression
//         vector<long long> comp = pref;
//         sort(comp.begin(), comp.end());
//         comp.erase(unique(comp.begin(), comp.end()), comp.end());

//         auto getIndex = [&](long long x) {
//             return (int)(lower_bound(comp.begin(), comp.end(), x) - comp.begin()) + 1;
//         };

//         // ✅ Fenwick (BIT) for counting prefix[j] < prefix[i]
//         int m = comp.size();
//         vector<long long> BIT(m + 1, 0);

//         auto update = [&](int i) {
//             while (i <= m) {
//                 BIT[i] += 1;
//                 i += (i & -i);
//             }
//         };

//         auto query = [&](int i) {
//             long long s = 0;
//             while (i > 0) {
//                 s += BIT[i];
//                 i -= (i & -i);
//             }
//             return s;
//         };

//         // ✅ Step 4: Count valid subarrays
//         long long ans = 0;

//         // Insert prefix[0]
//         update(getIndex(pref[0]));

//         for (int i = 1; i <= n; i++) {
//             int idx = getIndex(pref[i]);
//             ans += query(idx - 1);   // count prefix[j] < prefix[i]
//             update(idx);
//         }

//         return ans;
//     }
// };



