class Solution {
public:
    void bt(const vector<int> &nums, int index, int currentOR, int maxOR, int &count){
        if(currentOR == maxOR){
            count++;
        }
        for(int i = index; i < nums.size(); ++i){
            bt(nums, i+1, currentOR | nums[i], maxOR, count);
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR = 0;
        for(int num : nums){
            maxOR |= num;
        }
        int count = 0;
        bt(nums,0,0, maxOR, count);
        return count;
    }
};