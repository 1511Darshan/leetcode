class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> num(nums.begin(), nums.end());
        for(int i = 0;i<=nums.size();i++ ){
            if(num.find(i) == num.end()){
                return i;
            }
        }
        return -1;
    }
};