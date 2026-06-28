class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int ik = digits.size() - 1; ik >= 0; ik--) {
            if (digits[ik] + 1 != 10) {
                digits[ik] += 1;
                return digits;
            }
            digits[ik] = 0;
            if (ik == 0) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        return digits;        
    }
};