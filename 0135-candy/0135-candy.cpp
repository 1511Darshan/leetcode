#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> l(n, 1);

        // First pass: left to right
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                l[i] = l[i - 1] + 1;
            }
        }

        // Second pass: right to left
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                l[i] = max(l[i], l[i + 1] + 1);
            }
        }

        // Sum up the candies
        int total = 0;
        for (int c : l) {
            total += c;
        }
        return total;
    }
};