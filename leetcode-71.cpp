#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        string single = ".";
        string doubl = "..";
        stack<string> st;

        for (int i = 0; i < path.length(); i++) {
            if (path[i] == '/')
                continue;
            else {
                string temp = "";
                while (i < path.length() && path[i] != '/') {
                    temp += path[i];
                    i++;
                }
                if (temp == single) continue;
                if (temp == doubl) {
                    if (!st.empty()) st.pop();
                }
                else if (!temp.empty()) {
                    st.push(temp);
                }
            }
        }

        vector<string> comp;
        while (!st.empty()) {
            comp.push_back(st.top());
            st.pop();
        }

        reverse(comp.begin(), comp.end());

        string result = "/";
        for (int i = 0; i < comp.size(); i++) {
            result += comp[i];
            if (i != comp.size() - 1)
                result += '/';
        }

        return result;
    }
};
