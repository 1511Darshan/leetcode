class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> countmap;
        for(int num : nums){
            countmap[num]++;
            if(countmap[num] > n/2){
                return num;
            }
        }
        return -1;
    }
};