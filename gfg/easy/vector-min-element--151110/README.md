# Smallest in Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers  **arr[]**. Find the minimum element in the array using you language's inbuilt function.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4]
Output: 1
```

```
Input: arr[] = [3, 2, 1]
Output: 1

```

```
Input: arr[] = [5, 4, 2, 8, 8]
Output: 2
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T17:50:48.226Z  

```cpp
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int ans = *min_element(arr.begin(),arr.end());
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/vector-min-element--151110/1)