class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=s[i]-'a'+1;
        }
        int left=0;
        for(int i=0;i<n-1;i++){
            left+=s[i]-'a'+1;
           int bite=total-left;
            if(left==bite){
                return true;
            }
        }
        return false;
    }
};