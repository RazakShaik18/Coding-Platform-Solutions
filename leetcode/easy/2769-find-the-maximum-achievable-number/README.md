# Find the Maximum Achievable Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integers, `num` and `t`. A  **number** `x` is **achievable**  if it can become equal to `num` after applying the following operation  **at most**  `t` times:

- Increase or decrease x by 1, and simultaneously increase or decrease num by 1.

Return the  **maximum** possible value of `x`.

 

 **Example 1:** 

 **Input:**  num = 4, t = 1

 **Output:**  6

 **Explanation:** 

Apply the following operation once to make the maximum achievable number equal to `num`:

- Decrease the maximum achievable number by 1, and increase num by 1.

 **Example 2:** 

 **Input:**  num = 3, t = 2

 **Output:**  7

 **Explanation:** 

Apply the following operation twice to make the maximum achievable number equal to `num`:

- Decrease the maximum achievable number by 1, and increase num by 1.

 

 **Constraints:** 

- 1 <= num, t <= 50

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 14.40%)  
**Memory:** 9.4 MB (beats 98.49%)  
**Submitted:** 2026-10-17T14:41:00.571Z  

```cpp
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t; 
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-maximum-achievable-number/)