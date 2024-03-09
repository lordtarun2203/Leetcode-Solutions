class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size() == 1)
            return s[0] == '1';
        for(int i = 0 ; i < s.size() - 1; i++)
        {
            if(s[i] == '0' and s[i + 1] == '1')
                return false;
        }
        return true;
    }
};