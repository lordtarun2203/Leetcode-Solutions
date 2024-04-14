#include <string>
#include <stack>

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        std::stack<int> st;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    s[i] = '*'; // Mark invalid closing parenthesis for removal
                }
            }
        }

        // Mark invalid opening parenthesis for removal
        while (!st.empty()) {
            s[st.top()] = '*';
            st.pop();
        }

        // Construct the result string without marked invalid parentheses
        std::string result;
        for (char c : s) {
            if (c != '*') {
                result += c;
            }
        }
        
        return result;
    }
};
