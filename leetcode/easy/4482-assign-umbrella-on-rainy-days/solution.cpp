class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string>ans(n,"None");
        int alicecnt = 0,bobcnt = 0;
        for(int i = 0;i<n;i++){
            bool aliceneed = (i<n-1) && rain[i]==1 && rain[i+1] == 1;
            bool bobneed = rain[i] == 1;
            if(!aliceneed && !bobneed){
                continue;
            }
             if(aliceneed && !bobneed){
                 ans[i]= "Alice";
                 alicecnt++;
             }
            else if(!aliceneed && bobneed){
                ans[i] = "Bob";
                bobcnt++;
            }
            else{
                if(alicecnt <= bobcnt){
                    ans[i] = "Alice";
                    alicecnt++;
                }
                else{
                    ans[i] = "Bob";
                    bobcnt++;
                }
            }
        }
        return ans;
    }
};