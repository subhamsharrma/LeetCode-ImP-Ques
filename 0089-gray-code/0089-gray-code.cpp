class Solution {
public:
    vector<string> check(int n, int len) {
        if(n == 1) {
            return {"0", "1"};
        }
        vector<string> v = check(n - 1, len / 2);
        vector<string> anus;
        for(int i = 0; i < len / 2; i++) {
            anus.push_back("0" + v[i]);
        }
        for(int i = len / 2 - 1; i >= 0; i--) {
            anus.push_back("1" + v[i]);
        }
        return anus;
    }

    vector<int> grayCode(int n) {
        int len = pow(2, n);
        vector<string> v = check(n, len);
        vector<int> anus;

        for(int i = 0; i < len; i++) {
            anus.push_back(stoi(v[i], 0, 2));
        }
        return anus;
    }
};
