class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> unique(nums.begin(),nums.end());
        if(nums.size() == unique.size()){
            return false;
        }else{
            return true;
        }
    }
};