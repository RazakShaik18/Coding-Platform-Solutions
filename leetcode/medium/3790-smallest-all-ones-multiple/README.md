# Smallest All-Ones Multiple

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a positive integer `k`.

Find the  **smallest**  integer `n` divisible by `k` that consists of  **only the digit 1**  in its decimal representation (e.g., 1, 11, 111,...).

Return an integer denoting the  **number of digits**  in the decimal representation of `n`. If no such `n` exists, return `-1`.

 

 **Example 1:** 

 **Input:**  k = 3

 **Output:**  3

 **Explanation:** 

`n = 111` because 111 is divisible by 3, but 1 and 11 are not. The length of `n = 111` is 3.

 **Example 2:** 

 **Input:**  k = 7

 **Output:**  6

 **Explanation:** 

`n = 111111`. The length of `n = 111111` is 6.

 **Example 3:** 

 **Input:**  k = 2

 **Output:**  -1

 **Explanation:** 

There does not exist a valid `n` that is a multiple of 2.

 

 **Constraints:** 

- 2 <= k <= 105

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 61.14%)  
**Memory:** 8.5 MB (beats 81.22%)  
**Submitted:** 2026-10-24T10:13:20.525Z  

```cpp
class Solution {
public:
    int minAllOneMultiple(int k) {
        if (k % 2 == 0 || k % 5 == 0)
            return -1;

        int rem = 0;

        for (int len = 1; len <= k; len++) {
            rem = (rem * 10LL + 1) % k;

            if (rem == 0)
                return len;
        }

        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-all-ones-multiple/)