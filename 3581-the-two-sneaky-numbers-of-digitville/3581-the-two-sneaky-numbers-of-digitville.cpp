class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> a;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                a.push_back(nums[i]);
            }
        }
        return a;
    }
};