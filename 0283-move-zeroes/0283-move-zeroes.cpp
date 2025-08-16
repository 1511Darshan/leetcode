class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        vector<int> res(n);
        for(int i = 0; i < n;++i ){
            if(nums[i] != 0){
                res[index++] = nums[i];
            }
        }
        for(int i = index; i<n ; ++i){
            res[i] = 0;
        }
        for(int i = 0; i < n; ++i){
            nums[i] = res[i];
        }
    }
};