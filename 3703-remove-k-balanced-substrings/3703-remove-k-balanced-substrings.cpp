class Solution {
public:
    string removeSubstring(string s, int k) {
        string anss;
        for(auto it:s){
            anss.push_back(it);
            int size=anss.size();
            if(size>=2*k){
                bool valid=true;
                for(int i=0;i<k;i++){
                    if(anss[size-2*k+i]!='('){
                        valid=false;
                        break;
                    }
                    if(anss[size-k+i]!=')'){
                        valid=false;
                        break;
                    }
                }
                if(valid){
                    anss.resize(size-2*k);
                }
            }
        }
        return anss;
    }
};