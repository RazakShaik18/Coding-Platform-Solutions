# Unique 3-Digit Even Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array of digits called `digits`. Your task is to determine the number of  **distinct**  three-digit even numbers that can be formed using these digits.

 **Note** : Each  *copy*  of a digit can only be used  **once per number**, and there may  **not**  be leading zeros.

 

 **Example 1:** 

 **Input:**  digits = [1,2,3,4]

 **Output:**  12

 **Explanation:**  The 12 distinct 3-digit even numbers that can be formed are 124, 132, 134, 142, 214, 234, 312, 314, 324, 342, 412, and 432. Note that 222 cannot be formed because there is only 1 copy of the digit 2.

 **Example 2:** 

 **Input:**  digits = [0,2,2]

 **Output:**  2

 **Explanation:**  The only 3-digit even numbers that can be formed are 202 and 220. Note that the digit 2 can be used twice because it appears twice in the array.

 **Example 3:** 

 **Input:**  digits = [6,6,6]

 **Output:**  1

 **Explanation:**  Only 666 can be formed.

 **Example 4:** 

 **Input:**  digits = [1,3,5]

 **Output:**  0

 **Explanation:**  No even 3-digit numbers can be formed.

 

 **Constraints:** 

- 3 <= digits.length <= 10
- 0 <= digits[i] <= 9

## Solution

**Language:** C++  
**Runtime:** 26 ms (beats 13.84%)  
**Memory:** 32.4 MB (beats 14.09%)  
**Submitted:** 2026-10-15T13:49:55.810Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/unique-3-digit-even-numbers/)