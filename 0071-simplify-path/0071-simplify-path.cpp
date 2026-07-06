class Solution {
public:
    string simplifyPath(string path) {
        vector<string> components;
        stringstream ss(path);
        string compo;
        while (getline(ss, compo, '/')) {
            if (compo == "" || compo == ".") {
                continue;
            }

            if (compo == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } else {
                st.push_back(compo);
            }
        }

        stringstream simplifiedPath;
        for (const string& s : st) {
            simplifiedPath << "/" << s;
        }

        return simplifiedPath.str().empty() ? "/" : simplifiedPath.str();        
    }

private:
    vector<string> st;    
};