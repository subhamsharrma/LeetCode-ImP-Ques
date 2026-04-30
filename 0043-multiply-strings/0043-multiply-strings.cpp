class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1[0] == '0' || num2[0] == '0'){
            return "0";
        }

        vector<int> aaaa(num1.size() + num2.size(),0);
        for(int i=num1.size()-1; i>=0; i--){
            for(int j=num2.size()-1; j>=0; j--){
                aaaa[i+j+1] += (num1[i] - '0') * (num2[j] - '0');
                aaaa[i+j] += aaaa[i+j+1]/10;
                aaaa[i+j+1] %= 10;  
            }
        }
        
        // now remove the leading 0's
        int i=0;
        while(aaaa[i] == 0){
            i++;
        }

        string ans = "";
        while(i<aaaa.size()){
            ans.push_back(aaaa[i] + '0');
            i++;
        }
        return ans;
    }
};