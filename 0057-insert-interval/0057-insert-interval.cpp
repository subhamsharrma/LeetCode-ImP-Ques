class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> brsa;
        brsa.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            if (brsa.back()[1] >= intervals[i][0]) {
                brsa.back()[1] = max(brsa.back()[1], intervals[i][1]);
            } else {
                brsa.push_back(intervals[i]);
            }
        }

        return brsa;        
    }
};