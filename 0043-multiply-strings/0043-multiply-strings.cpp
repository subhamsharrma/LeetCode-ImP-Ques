class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1[0] == '0' || num2[0] == '0'){
            return "0";
        }

        vector<int> bbbb(num1.size() + num2.size(),0);
        for(int i=num1.size()-1; i>=0; i--){
            for(int j=num2.size()-1; j>=0; j--){
                bbbb[i+j+1] += (num1[i] - '0') * (num2[j] - '0');
                bbbb[i+j] += bbbb[i+j+1]/10;
                bbbb[i+j+1] %= 10;  
            }
        }
        
        // now remove the leading 0's
        int i=0;
        while(bbbb[i] == 0){
            i++;
        }

        string ans = "";
        while(i<bbbb.size()){
            ans.push_back(bbbb[i] + '0');
            i++;
        }
        return ans;
    }
};