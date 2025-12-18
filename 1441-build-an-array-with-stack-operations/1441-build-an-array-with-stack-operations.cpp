class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        vector<int> st; // simulate stack
        
        int idx = 0; // pointer on target
        
        for (int num = 1; num <= n && idx < target.size(); num++) {
            // always push the number
            st.push_back(num);
            ops.push_back("Push");
            
            // check if this number is needed
            if (st.back() == target[idx]) {
                idx++; // keep it
            } else {
                // not needed → pop it
                st.pop_back();
                ops.push_back("Pop");
            }
        }
        
        return ops;
    }
};
