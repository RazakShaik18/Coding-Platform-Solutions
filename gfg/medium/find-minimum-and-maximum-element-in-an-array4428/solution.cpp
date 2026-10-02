class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int maximum = *max_element(arr.begin(),arr.end());
               int minimum = *min_element(arr.begin(),arr.end());
               return{minimum,maximum};
    }
};