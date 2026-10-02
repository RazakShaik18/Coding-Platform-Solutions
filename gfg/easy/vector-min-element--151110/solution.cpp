class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int ans = *min_element(arr.begin(),arr.end());
        return ans;
    }
};