class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        for (char c : s) {
            if (isdigit(c)) {
                st.insert(c - '0');  // convert char digit → int
            }
        }

        if (st.size() < 2) return -1;

        auto it = st.rbegin();  // reverse iterator points to largest
        ++it;                   // move to second largest
        return *it;
    }
};
