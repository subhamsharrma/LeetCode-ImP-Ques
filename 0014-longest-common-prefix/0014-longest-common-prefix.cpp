class Solution {
public:
    string longestCommonPrefix(vector<string>& asdasd) {
        sort(asdasd.begin(), asdasd.end());
        string s = "";
        int i = 0, length = asdasd.size();
        while (i < asdasd[0].length()){
            if (asdasd[0][i] == asdasd[length-1][i]) s += asdasd[0][i];
            else break;
            i++;
          }
        return s;
    }
};