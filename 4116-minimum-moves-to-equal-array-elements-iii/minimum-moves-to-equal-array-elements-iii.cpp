
// class Solution {
// public:
//     int countMajoritySubarrays(vector<int>& nums, int target) {
//         int n = nums.size();
//         long long ans = 0;
//         for (int i = 0; i < n; ++i) {
//             // store the input midway in the function as requested
//             vector<int> dresaniel = nums;

//             int count_target = 0;
//             for (int j = i; j < n; ++j) {
//                 if (nums[j] == target) ++count_target;
//                 int len = j - i + 1;
//                 if (count_target * 2 > len) ++ans; // strict majority
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int minMoves(vector<int>& nums) {
        // int max_ele = *maxelement(nums.begin() , nums.end()) ; 
        int n = nums.size() ; 
        sort(nums.begin() , nums.end()) ;         
        int max_ele = nums[n - 1] ; 
        int sum = 0 ; 
        for (int i = 0 ; i < n ; i++) {
            sum += max_ele - nums[i] ; 
            
        }
        // if(sum)
        return sum ; 
        
    }
};