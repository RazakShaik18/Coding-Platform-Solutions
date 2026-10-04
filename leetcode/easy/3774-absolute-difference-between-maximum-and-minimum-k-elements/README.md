# Absolute Difference Between Maximum and Minimum K Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` and an integer `k`.

Find the absolute difference between:

- the sum of the k largest elements in the array; and
- the sum of the k smallest elements in the array.

Return an integer denoting this difference.

 

 **Example 1:** 

 **Input:**  nums = [5,2,2,4], k = 2

 **Output:**  5

 **Explanation:** 

- The k = 2 largest elements are 4 and 5. Their sum is 4 + 5 = 9.
- The k = 2 smallest elements are 2 and 2. Their sum is 2 + 2 = 4.
- The absolute difference is abs(9 - 4) = 5.

 **Example 2:** 

 **Input:**  nums = [100], k = 1

 **Output:**  0

 **Explanation:** 

- The largest element is 100.
- The smallest element is 100.
- The absolute difference is abs(100 - 100) = 0.

 

 **Constraints:** 

- 1 <= n == nums.length <= 100
- 1 <= nums[i] <= 100
- 1 <= k <= n

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 32.3 MB (beats 51.36%)  
**Submitted:** 2026-10-04T18:13:24.141Z  

```cpp
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int minimum = 0;
        int maximum = 0;

        // First k elements
        for(int i = 0; i < k; i++) {
            minimum += nums[i];
        }

        // Last k elements
        for(int i = n - k; i < n; i++) {
            maximum += nums[i];
        }

        return abs(maximum - minimum);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/)