#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[1] != b[1]) return a[1] < b[1];
            return a[0] > b[0];
        });

        int m = 0, largest = -1, second = -1;

        for (auto& interval : intervals) {
            int a = interval[0], b = interval[1];

            bool is_largest_in = (a <= largest);
            bool is_second_in = (a <= second);

            if (is_largest_in && is_second_in) continue;

            m += (is_largest_in ? 1 : 2);

            second = (is_largest_in ? largest : b - 1);
            largest = b;
        }

        return m;
    }
};
