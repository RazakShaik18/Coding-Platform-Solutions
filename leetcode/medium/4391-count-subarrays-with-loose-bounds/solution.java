class Solution {
    public long countSubarrays(int[] nums, int minK, int maxK) {
        int n = nums.length;
        long cnt = 0;
        //int lastmin = -1,lastbad = -1,lastMax = -1;
        long len =  0;
        for(int i = 0;i<n;i++){
            if(nums[i]>=minK && nums[i]<=maxK){
                len++;
                cnt+=len;
            }
            else{
                len = 0;
            }
        }
        return cnt;
    }
}