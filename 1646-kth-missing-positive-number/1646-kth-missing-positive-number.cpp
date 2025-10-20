class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;   // count missing
        int num = 1;     // current number to check
        int i = 0;       // pointer in arr

        while (true) {
            if (i < arr.size() && arr[i] == num) {
                i++;  // present, move pointer
            } else {
                count++;  // missing number found
                if (count == k) return num;
            }
            num++;
        }
    }
};
