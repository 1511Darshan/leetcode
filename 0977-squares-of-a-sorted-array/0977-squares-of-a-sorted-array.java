class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] r = new int[nums.length];
        int a = 0;
        int b = nums.length - 1;
        for(int i = nums.length - 1; i >= 0; --i){
            if(Math.abs(nums[a]) > Math.abs(nums[b])){
                r[i] = nums[a] * nums[a];
                a++;
            }else{
                r[i] = nums[b] * nums[b];
                b--;
            } 
        }
        return r;
    }
};