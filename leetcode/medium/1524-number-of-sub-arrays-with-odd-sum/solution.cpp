
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod = 1e9 + 7;

        int odd = 0;
        int even = 1;

        int prefix = 0;
        int ans = 0;

        for (int x : arr) {
            prefix += x;

            if (prefix % 2 == 1) {
                ans = (ans + even) % mod;
                odd++;
            }
            else {
                ans = (ans + odd) % mod;
                even++;
            }
        }

        return ans;
    }
};
