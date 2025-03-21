class Solution {
    public int maximumCount(int[] nums) {
       int c = 0, co = 0;
       for(int i = 0; i<nums.length;i++){
        if(nums[i] > 0){
            c++;
        }else if(nums[i] < 0){
            co++;
        }
       }
       return Math.max(c , co); 
    }
}