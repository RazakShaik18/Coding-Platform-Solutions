class Solution {
    public long maximizeSum(int[] nums, int k) {
        int n = nums.length;
        long total = 0;
        long[] gains = new long[n];
        for(int i =  0; i<n;i++){
            total+=nums[i];
            char[] d = String.valueOf(nums[i]).toCharArray();
              Arrays.sort(d);
            long best = 0;
            for(int j = d.length-1;j>=0;j--  ){
               best = best * 10+(d[j]-'0');
            }
            
            gains[i] = best - nums[i];
        }
        Arrays.sort(gains);
        for(int i = n-1;i>=n-k;i--){
            total += gains[i];
        }
        return total;
        
    }
}