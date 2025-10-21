class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ; 

        int x = k ;
        for(int  i : nums) {
            if(i == x ) x = x + k ; 
        }

        return x ;

    }
};

// 2 3 4 6 7 8 10 //  k = 7  