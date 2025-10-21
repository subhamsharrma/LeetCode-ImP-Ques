class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount = 0;
        int current = 1;
        int i = 0; // pointer in arr
        
        while (true) {
            if (i < arr.size() && arr[i] == current) {
                i++; // number is present
            } else {
                missingCount++; // number is missing
                if (missingCount == k) return current;
            }
            current++;
        }
    }
};
