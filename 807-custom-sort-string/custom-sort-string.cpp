class Solution {
public:
    string customSortString(string order, string s) {
        string news = "";

        for (char ch : order) {
            auto found = find(s.begin(), s.end(), ch);
            while (found != s.end()) {
                news += *found;
                s.erase(found);
                found = find(s.begin(), s.end(), ch);
            }
        }

        for (char ch : s) {
            news += ch;
        }

        return news;
    }
};