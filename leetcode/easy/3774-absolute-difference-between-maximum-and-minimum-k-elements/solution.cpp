class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int minimum = 0;
        int maximum = 0;

        // First k elements
        for(int i = 0; i < k; i++) {
            minimum += nums[i];
        }

        // Last k elements
        for(int i = n - k; i < n; i++) {
            maximum += nums[i];
        }

        return abs(maximum - minimum);
    }
};