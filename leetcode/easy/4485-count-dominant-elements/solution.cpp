class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            long long sum = 0;
            int res = 0;
            if(i>0){
                sum += nums[i-1];
                res++;
            }
            if(i<n-1){
                sum+=nums[i+1];
                res++;
            }
            if(res==0 || (long long )nums[i]*res>=sum){
                cnt++;
            }
        }
        return cnt;
    }
};