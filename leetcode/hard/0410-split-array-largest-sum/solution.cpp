class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans = high;

        auto isvalid = [&](int maxsum){
        int gp = 1;
        int curr = 0;

        for(int x :nums){
            if(curr + x > maxsum){
                gp++;
                curr = x;
                if(gp>k){
                    return false;
                }
            }
            else{
                curr += x;
            }
            
        }
        return true;

        };
        while(low<=high){
            int mid = low +(high-low)/2;
            if(isvalid(mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};