class Solution {
    public long minCost(int[] nums) {
        int n = nums.length;
        long best =  Long.MAX_VALUE;
        int i = 0;
        while(i<n){
            int j = i;
            while(j+1<n && nums[j+1] == nums[i]){
                j++;
            }
            boolean prefix = (i==0) || (i<=n-2);
            boolean suffix = (j==n-1) || (j>=1);
                if(prefix && suffix){
                    long cost = (long) (i+(n-1-j)) * nums[i];
                    best = Math.min(best,cost);
                }
                i = j +1;
        }
        return best;
    }
}