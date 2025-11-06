class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sorted array to store nums array
        unordered_map<int, int> hashmap;
        //finding complement in the array of elemets
        for(int i = 0; i<nums.size(); ++i){
            int complement = target - nums[i];

            if(hashmap.find(complement) != hashmap.end()){
                return {hashmap[complement],i};
            }
            hashmap[nums[i]] = i;

        }
        return {};
    }
};