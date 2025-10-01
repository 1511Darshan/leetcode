class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;      // Initial number of full bottles drunk
    int empty = numBottles;      // All full bottles become empty after drinking

    while (empty >= numExchange) {
        int exchange = empty / numExchange;  // Number of new full bottles we can get
        total += exchange;                   // Add to total drunk
        empty = empty % numExchange + exchange; // Update empty bottles: remaining + newly drunk
    }

    return total;
}
};