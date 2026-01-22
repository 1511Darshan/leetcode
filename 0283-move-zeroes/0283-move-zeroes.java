class Solution {
    public void moveZeroes(int[] nums) {
        //0th position finder
        int w = 0;
        for(int i = 0; i<nums.length;++i){
            //checking for non zero ele
            if(nums[i] != 0){
                //assignings temp to store the pos of 0th 
                int temp = nums[w];
                //write 0 to non zero element place
                nums[w] = nums[i];
                //write the non zero element to 0th place
                nums[i] = temp;
                w++;
            }
        }
    }
}