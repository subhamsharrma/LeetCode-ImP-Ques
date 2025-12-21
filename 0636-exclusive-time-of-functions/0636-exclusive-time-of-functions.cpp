class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n, 0);
        stack<int> st;          // function call stack
        int prevTime = 0;       // last CPU timestamp

        for (string &log : logs) {
            int id, time;
            string type;

            // parse log: id:type:time
            stringstream ss(log);
            string temp;

            getline(ss, temp, ':');
            id = stoi(temp);

            getline(ss, type, ':');

            getline(ss, temp, ':');
            time = stoi(temp);

            if (type == "start") {
                if (!st.empty()) {
                    ans[st.top()] += time - prevTime;
                }
                st.push(id);
                prevTime = time;
            } else { // "end"
                ans[st.top()] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1;
            }
        }
        return ans;
    }
};
