class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int n = nums.size();

        int total = 0;
        int left_sum = 0;

        for (int num : nums) {
            total += num;
        }

        for (int i = 0; i < n; i++) {

            int right_sum = total - left_sum - nums[i];

            if (left_sum == right_sum) {
                return i;
            }

            left_sum += nums[i];
        }

        return -1;
    }
};