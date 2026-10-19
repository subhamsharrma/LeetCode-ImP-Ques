class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0)
            return "0";        

        string fractions;
        if ((numerator < 0) ^ (denominator < 0))
            fractions += "-";        

        long long dividend = llabs((long long)numerator);
        long long divisor = llabs((long long)denominator);
        fractions += to_string(dividend / divisor);
        long long remainder = dividend % divisor;
        if (remainder == 0) {
            return fractions;
        }

        fractions += ".";
        unordered_map<long long, int> map;
        while (remainder != 0) {
            if (map.count(remainder)) {
                fractions.insert(map[remainder], "(");
                fractions += ")";
                break;
            }
            map[remainder] = fractions.size();
            remainder *= 10;
            fractions += to_string(remainder / divisor);
            remainder %= divisor;
        }

        return fractions;
    }
};