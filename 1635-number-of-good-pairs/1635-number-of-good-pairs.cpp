class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int ans = 0;
       unordered_map<int,int> freq;
       for(auto x : nums){
        ans += freq[x]++;
       }
       return ans;

    }
};