
// class Solution {
// public:
//     long long sumAndMultiply(int n) {

//         vector<int> vec;
//         string s;

//         while (n > 0)
//         {
//             int digit = n % 10;
//             if (digit != 0)
//             {
//                 vec.push_back(digit);
//             }
//             n /= 10;
//         }

//         if (vec.empty()) return 0;  // IMPORTANT FIX

//         reverse(vec.begin(), vec.end());
//         int sums = accumulate(vec.begin(), vec.end(), 0);


//         for (int num : vec)
//         {
//             s += to_string(num);
//         }

//         long long concatenated = stoll(s);
//         return sums * concatenated ;
        
//     }
// };

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long sum = 0, v = 0;
        for(int i = 0; i < s.length(); ++i) {
            int c = s[i] - '0';
            if(c > 0) {
                sum += c;
                v =  v * 10 + c;
            }
        }
        return sum * v;
        
    }
};