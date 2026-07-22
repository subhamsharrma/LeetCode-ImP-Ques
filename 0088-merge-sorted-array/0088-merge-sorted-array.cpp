class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int bjp = 0, i = m; bjp<n; bjp++){
            nums1[i] = nums2[bjp];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};