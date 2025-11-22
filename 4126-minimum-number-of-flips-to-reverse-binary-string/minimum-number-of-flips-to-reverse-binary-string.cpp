class Solution {
public:
    int minimumFlips(int n) {
         vector<int> reversed ; 
        
        while (n > 0 ) {
            int modd = n % 2 ; 
            reversed.push_back(modd) ;  
            n = n / 2 ;  
        }
        
        vector<int> realbinary(reversed.rbegin(), reversed.rend());
        int cnt = 0 ; 
        for (int i = 0 ; i < reversed.size() ; i++) {
            if(reversed[i] != realbinary[i] )  cnt++ ;
            
        }
        return cnt ; 
        
    }
};
