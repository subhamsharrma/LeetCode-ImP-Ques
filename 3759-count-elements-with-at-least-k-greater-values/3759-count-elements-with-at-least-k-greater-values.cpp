
// class Solution {
// public:
//     int countElements(vector<int>& nums, int k) {
//         int cnt = 0  ; 
//         for (int i =0 ; i < nums.size() ; i++) {
//             bool gretr = true ; 
//             int cnt_k ; 
//             for (int j =0 ; j < nums.size() ; j++) {
//                 if(nums[i] > nums[j]) {
//                     cnt_k++ ; 
//                 }  else {
//                     gretr = false ; 
//                 }
//             }
//             if(gretr && cnt_k >= k ) cnt += 1 ; 
//         }        
//         return cnt ; 
//     }
// };

// class Solution {
// public:
//     int countElements(vector<int>& nums, int k) {
//         int cnt = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             int cnt_k = 0;                    // FIXED
//             for (int j = 0; j < nums.size(); j++) {
//                 if (nums[j] < nums[i]) {      // FIXED condition
//                     cnt_k++;
//                 }
//             }
//             if (cnt_k >= k) cnt++;            // FIXED logic
//         }
//         return cnt;
//     }
// };

class Solution {
public:
    int countElements(vector<int>& nums, int k) {

        int n = nums.size();
        int ans =0;
        int i=0;

        //sort
        sort(nums.begin(), nums.end());

        while(i<n) {

            //counting if duplicates
            int count =1;
            while(i<n-1 && nums[i] ==nums[i+1]) {
                i++;
                count++;
            }

            int elementsAfterIt = n-i-1;

            if(elementsAfterIt >=k) {
                ans +=count;
            }else {
                break;
            }
            i++;

            //elements after it
        }

        return ans;
        
    }
};