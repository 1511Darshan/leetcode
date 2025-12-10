class Solution {
public:
    int MOD= 1000000007;
    int countPermutations(vector<int>& complexity) {
        int n= complexity.size();
        long long ways= 1;
        for (int i= 1; i< n; i++) {
            if (complexity[i]<= complexity[0]) return 0;
            ways*= i;
            ways%= MOD;
        }
        return ways;
    }
};