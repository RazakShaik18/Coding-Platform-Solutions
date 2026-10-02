class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        int cnt = 0;
        unordered_map<int,int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        for(auto p : mp){
            if(p.second>arr.size()/k){
                cnt++;
            }
        }
        return cnt;
        
    }
};