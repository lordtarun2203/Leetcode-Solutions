class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;  // Initially, you can drink all the full bottles you have
        while (numBottles >= numExchange) {  // While you can exchange empty bottles for full ones
            int newBottles = numBottles / numExchange;  // Get the number of new full bottles
            int rem = numBottles % numExchange;  // Remainder empty bottles after exchange
            res += newBottles;  // Add the new full bottles to the result
            numBottles = newBottles + rem;  // Update the count of bottles for the next iteration
        }
        return res;
    }
};
