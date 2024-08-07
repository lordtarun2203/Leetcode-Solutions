class Solution {
public:
    string makeGood(string s) {
        string res;

        int i = 0;

        while (i < s.length()) {
            int m = res.length();
            if (m > 0 && abs(res[m - 1] - s[i]) == 32) {
                res.pop_back();
                i++;
            } else if (i + 1 < s.length() && abs(s[i] - s[i + 1]) == 32) {
                i += 2;
            } else {
                res.push_back(s[i]);
                i++;
            }
        }

        return res;
    }
};