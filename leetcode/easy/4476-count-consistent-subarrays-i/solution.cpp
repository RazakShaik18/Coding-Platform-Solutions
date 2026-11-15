class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i<n;i++){
            int And = nums[i];
            int minvalue = nums[i];
            for(int j = i; j<n;j++){
                And &= nums[j];
                minvalue = min(minvalue,nums[j]);
                if(And == minvalue){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};