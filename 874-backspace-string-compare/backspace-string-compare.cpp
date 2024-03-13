class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '#') {
                if (i > 0) {
                    s.erase(i - 1, 2);
                    i = i - 2;
                } else {
                    s.erase(i, 1);
                    i = i - 1;
                }
            }
            i++;
        }
        cout << s;

        int j = 0;
        while (j < t.size()) {
            if (t[j] == '#') {
                if (j > 0) {
                    t.erase(j - 1, 2);
                    j = j - 2;
                } else {
                    t.erase(j, 1);
                    j = j - 1;
                }
            }
            j++;
        }
        cout << t;

        return s == t;
    }
};
