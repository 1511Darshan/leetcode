class Solution {
public:
    int mirrorDistance(int n) {
        // Step 1: convert number to string
        string s = to_string(n);

        // Step 2: reverse the string
        reverse(s.begin(), s.end());

        // Step 3: convert reversed string back to integer
        int rev = stoi(s);

        // Step 4: return absolute difference
        return abs(n - rev);
    }
};
