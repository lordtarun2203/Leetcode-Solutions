#include <stack>
#include <string>

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> leftStack;
        stack<int> asteriskStack;
        
        for (int i = 0; i < s.size(); ++i) {
            char ch = s[i];
            
            if (ch == '(')
                leftStack.push(i);
            else if (ch == '*')
                asteriskStack.push(i);
            else {
                if (!leftStack.empty())
                    leftStack.pop();
                else if (!asteriskStack.empty())
                    asteriskStack.pop();
                else
                    return false;
            }
        }
        
        while (!leftStack.empty() && !asteriskStack.empty()) {
            if (leftStack.top() > asteriskStack.top())
                return false;
            leftStack.pop();
            asteriskStack.pop();
        }
        
        return leftStack.empty();
    }
};
