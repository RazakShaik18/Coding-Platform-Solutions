class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int max_num = *max_element(nums.begin(),nums.end());
        for(int i = 0; i<n;i++){
            cnt+=(max_num-nums[i]);
        }
        return cnt;
    }
};