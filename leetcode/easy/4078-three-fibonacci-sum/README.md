# Three Fibonacci Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`.

The  **Fibonacci sequence**  starts with 0 and 1, and each subsequent number is the sum of the previous two numbers. Its first few terms are `0, 1, 1, 2, 3, 5, 8, 13,...`.

Return `true` if `n` can be expressed as the sum of  **three consecutive terms**  in the Fibonacci sequence, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  n = 16

 **Output:**  true

 **Explanation:** 

The three consecutive terms 3, 5, and 8 have a sum of `3 + 5 + 8 = 16`.

 **Example 2:** 

 **Input:**  n = 8

 **Output:**  false

 **Explanation:** 

Although `1 + 2 + 5 = 8`, these terms are not consecutive in the Fibonacci sequence. No three consecutive terms have a sum of 8.

 **Example 3:** 

 **Input:**  n = 2

 **Output:**  true

 **Explanation:** 

The first three terms have a sum of `0 + 1 + 1 = 2`.

 

 **Constraints:** 

- 1 <= n <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8 MB (beats 20.49%)  
**Submitted:** 2026-10-13T16:33:11.105Z  

```cpp

/*class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a = 0;
        int b = 1;

        while (true) {
            int c = a + b;
            int sum = a + b + c;

            if (sum == n) {
                return true;
            }

            if (sum > n) {
                return false;
            }

            a = b;
            b = c;
        }

        return false;
    }
};*/
class Solution {
public:
    bool isPerfectSquare(long long x) {
        long long r = sqrt(x);
        return r * r == x;
    }

    bool threeFibonacciSum(int n) {
        if (n % 2 != 0) return false;

        long long x = n / 2;

        return isPerfectSquare(5 * x * x + 4) ||
               isPerfectSquare(5 * x * x - 4);
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/three-fibonacci-sum/)