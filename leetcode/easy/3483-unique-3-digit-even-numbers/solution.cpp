class Solution {
public:

    void Solve(vector<int>&digits, vector<int>&vis, string s, set<string>&st, int n){
        if(s.size() == 3){
            int val = s[2] - '0';
            if(val % 2 == 0){
                st.insert(s);
            }
            return;
        }
        if(s.size() > 3) return;

        for(int i = 0 ; i < n ; i++){
            if(vis[i] == 0){
                if(s.size() == 0 && digits[i]==0)continue;
            
                s.push_back(digits[i]+'0');
                vis[i]=1;
                Solve(digits,vis,s,st,n);
                vis[i] = 0;
                s.pop_back();
            }
        }
    }
    int totalNumbers(vector<int>& digits) {

        int n = digits.size();
        set<string>st;
        string s;
        vector<int>vis(n,0);

        Solve(digits,vis,s,st,n);

        return st.size();
        
    }
};