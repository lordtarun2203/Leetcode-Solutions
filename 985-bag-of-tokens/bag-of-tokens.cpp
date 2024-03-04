#include <vector>
#include <algorithm>

class Solution {
public:
    int bagOfTokensScore(std::vector<int>& tokens, int power) {
        int score = 0;
        int maxScore = 0;

        sort(tokens.begin(), tokens.end());

        int left = 0, right = tokens.size() - 1;

        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left];
                score++;
                left++;
                maxScore = max(maxScore, score);
            } else if (score > 0) {
                power += tokens[right];
                score--;
                right--;
            } else {
                // If power is less than the smallest token and score is 0, break.
                break;
            }
        }

        return maxScore;
    }
};
