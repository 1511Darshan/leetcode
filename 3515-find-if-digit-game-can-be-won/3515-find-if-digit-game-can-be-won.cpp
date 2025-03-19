#include <vector>
#include <numeric>  // For std::accumulate
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        // Separate single-digit and double-digit numbers
        int sum_single = 0, sum_double = 0;
        
        // Categorize numbers into single and double digits
        for (int num : nums) {
            if (num <= 9) {
                sum_single += num;  // Add single-digit number to sum_single
            } else {
                sum_double += num;  // Add double-digit number to sum_double
            }
        }

        // Total sum of all numbers
        int sum_total = sum_single + sum_double;

        // Scenario 1: Alice picks single digits, Bob gets double digits
        if (sum_single > (sum_total - sum_single)) {
            return true;
        }

        // Scenario 2: Alice picks double digits, Bob gets single digits
        if (sum_double > (sum_total - sum_double)) {
            return true;
        }

        // If neither scenario results in Alice winning, return false
        return false;
    }
};
