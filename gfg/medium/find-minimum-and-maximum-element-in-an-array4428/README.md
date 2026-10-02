# find-minimum-and-maximum-element-in-an-array4428

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T14:45:57.402Z  

```cpp
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int maximum = *max_element(arr.begin(),arr.end());
               int minimum = *min_element(arr.begin(),arr.end());
               return{minimum,maximum};
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)