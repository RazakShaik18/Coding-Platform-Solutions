class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int x = 1;
        for (int num : nums) {
            if (num == x)
                x++;
        }

        return x;
    }
};