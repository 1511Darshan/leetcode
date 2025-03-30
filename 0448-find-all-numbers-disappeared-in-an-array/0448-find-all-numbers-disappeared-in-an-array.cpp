class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> missing(nums.begin(), nums.end());
        vector<int> ans;
        for(int i = 1; i<= nums.size();i++){
            if(missing.find(i) == missing.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};