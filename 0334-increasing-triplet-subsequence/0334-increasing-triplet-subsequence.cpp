// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         int a , b , c ; 
//         a = nums[0] ; 
//         bool yes = false ;  

//         for (int i = 1 ; i < nums.size() ; i++) {
//             if(nums[i] > a ) b = nums[i] ; 
//             if(nums[i] > b)  c = nums[i] ;

//         }
        
//     }
// };
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long first = LONG_MAX;
        long second = LONG_MAX;

        for (int x : nums) {
            if (x <= first) first = x; //checking x is smaller than first 
            else if (x <= second) second = x;
            else return true;
        }
        return false;
    }
};
