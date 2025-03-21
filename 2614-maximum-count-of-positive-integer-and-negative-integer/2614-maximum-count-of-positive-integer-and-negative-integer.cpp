class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c = 0, co = 0;
        for(int num : nums){
            c += num > 0;
            co += num < 0;
        }
        return max(c,co);
    }
};