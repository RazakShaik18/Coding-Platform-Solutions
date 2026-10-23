class Solution {
    public int sortPermutation(int[] nums) {
        int n = nums.length;
        int res = -1;
        for(int i = 0;i<n;i++){
            if(nums[i]!=i){
                res &= nums[i];
            }
        }
        return Math.max(res,0);
    }
}