# Count Frequent Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array  **arr[]**  of  **n**  integers and an integer  **k**, find the count of elements that appear more than  **n/k**  times in the array.

 **Examples :** 

```
Input: arr[] = [3, 1, 2, 2, 1, 2, 3, 3], k = 4
Output: 2
Explanation: The elements 2 and 3 each occur 3 times, which is more than n/k = 2.

```

```
Input: arr = [2, 3, 3, 2], k = 3
Output: 2
Explanation: Both 2 and 3 appear 2 times in the array, which is more than n/k.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T17:36:50.317Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-element-occurences/1)