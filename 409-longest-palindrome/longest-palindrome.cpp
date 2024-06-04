#include <unordered_map>
#include <string>

class Solution {
public:
    int longestPalindrome(std::string s) {
        int countevens = 0;
        bool hasOdd = false;
        std::unordered_map<char, int> umap;
        
        // Count frequencies of each character
        for (char x : s) {
            umap[x]++;
        }
        
        // Calculate countevens and check for odd frequencies
        for (auto c : umap) {
            if (c.second % 2 == 0) {
                countevens += c.second;
            } else {
                countevens += c.second - 1; // Add the even part of the odd count
                hasOdd = true;
            }
        }
        
        // If there was any odd count, we can add one character in the center
        if (hasOdd) {
            countevens += 1;
        }
        
        return countevens;
    }
};
