#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;  // There's one way to have zero odd numbers initially
        int count = 0;
        int oddCount = 0;

        for (int num : nums) {
            if (num % 2 != 0) {
                oddCount++;
            }
            if (prefixSum.find(oddCount - k) != prefixSum.end()) {
                count += prefixSum[oddCount - k];
            }
            prefixSum[oddCount]++;
        }

        return count;
    }
};
