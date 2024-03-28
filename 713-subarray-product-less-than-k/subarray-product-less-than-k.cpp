class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) // If k is less than or equal to 1, no subarray can have a product less than k
            return 0;

        int left = 0;
        int product = 1;
        int count = 0;

        for (int right = 0; right < nums.size(); ++right) {
            product *= nums[right];
            
            // Move the left pointer until product is less than k
            while (product >= k && left <= right) {
                product /= nums[left++];
            }

            // Count the number of subarrays ending at right
            count += right - left + 1;
        }

        return count;
    }
};
