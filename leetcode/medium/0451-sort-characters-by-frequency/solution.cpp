class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        // Count frequency
        for (char c : s) {
            mp[c]++;
        }

        // Store character and frequency
        vector<pair<char, int>> v;

        for (auto x : mp) {
            v.push_back({x.first, x.second});
        }

        // Sort by frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Build answer
        string ans = "";

        for (auto x : v) {
            ans += string(x.second, x.first);
        }

        return ans;
    }
};