class Solution {
public:
    void recursion(vector<int> num, int i, int j, vector<vector<int> > &des) {
        if (i == j-1) {
            des.push_back(num);
            return;
        }
        for (int k = i; k < j; k++) {
            if (i != k && num[i] == num[k]) continue;
            swap(num[i], num[k]);
            recursion(num, i+1, j, des);
        }
    }
    vector<vector<int> > permuteUnique(vector<int> &num) {
        sort(num.begin(), num.end());
        vector<vector<int> >des;
        recursion(num, 0, num.size(), des);
        return des;
    }
};