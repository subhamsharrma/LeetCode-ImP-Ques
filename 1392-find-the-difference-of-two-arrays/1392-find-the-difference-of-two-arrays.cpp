class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> distinct_nums1 , distinct_nums2 ; 
        unordered_set<int>mp(nums1.begin() , nums1.end()) ; 
        unordered_set<int>mp2(nums2.begin() , nums2.end()) ; 

        for(int x : mp) {
            if (mp2.count(x) == 0) {
                distinct_nums1.push_back(x);
            }
        }
        for(int x : mp2) {
            if (mp.count(x) == 0) {
                distinct_nums2.push_back(x);
            }
        }
        return {distinct_nums1 , distinct_nums2} ; 
        
        
    }
};