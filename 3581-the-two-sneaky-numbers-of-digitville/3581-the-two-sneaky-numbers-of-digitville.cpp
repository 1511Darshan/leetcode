class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> freq;
        vector<int> result; 
        for(int x : nums){
            freq[x]++;
        }
        
        for(int x : nums){
            if(--freq[x] == 1){
                result.push_back(x);
            }
        }
        return result;
    }
};