#include <vector>
#include <string>

class Solution {
public:
    bool palind(const std::string& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return false;  // Not a palindrome
            }
        }

        return true;  // Palindrome
    }

    std::string firstPalindrome(const std::vector<std::string>& words) {
        for (const auto& word : words) {
            if (palind(word)) {
                return word;
            }
        }

        return "";
    }
};
