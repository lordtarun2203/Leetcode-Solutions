class Solution {
public:
    std::string customSortString(std::string order, std::string s) {
        std::string news = "";

        for (char ch : order) {
            auto found = std::find(s.begin(), s.end(), ch);
            while (found != s.end()) {
                news += *found;
                s.erase(found);
                found = std::find(s.begin(), s.end(), ch);
            }
        }

        for (char ch : s) {
            news += ch;
        }

        return news;
    }
};