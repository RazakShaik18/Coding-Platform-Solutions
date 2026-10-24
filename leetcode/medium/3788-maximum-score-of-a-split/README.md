# Maximum Score of a Split

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n`.

Choose an index `i` such that `0 <= i < n - 1`.

For a chosen split index `i`:

- Let prefixSum(i) be the sum of nums[0] + nums[1] +... + nums[i].
- Let suffixMin(i) be the minimum value among nums[i + 1], nums[i + 2],..., nums[n - 1].

The  **score**  of a split at index `i` is defined as:

`score(i) = prefixSum(i) - suffixMin(i)`

Return an integer denoting the  **maximum**  score over all valid split indices.

 

 **Example 1:** 

 **Input:**  nums = [10,-1,3,-4,-5]

 **Output:**  17

 **Explanation:** 

The optimal split is at `i = 2`, `score(2) = prefixSum(2) - suffixMin(2) = (10 + (-1) + 3) - (-5) = 17`.

 **Example 2:** 

 **Input:**  nums = [-7,-5,3]

 **Output:**  -2

 **Explanation:** 

The optimal split is at `i = 0`, `score(0) = prefixSum(0) - suffixMin(0) = (-7) - (-5) = -2`.

 **Example 3:** 

 **Input:**  nums = [1,1]

 **Output:**  0

 **Explanation:** 

The only valid split is at `i = 0`, `score(0) = prefixSum(0) - suffixMin(0) = 1 - 1 = 0`.

 

 **Constraints:** 

- 2 <= nums.length <= 105
- -109​​​​​​​ <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 16 ms (beats 27.65%)  
**Memory:** 156 MB (beats 46.08%)  
**Submitted:** 2026-10-24T10:10:56.660Z  

```cpp
class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();

        vector<long long> prefix(n);
        vector<int> suffixMin(n);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + nums[i];

        suffixMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--)
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);

        long long ans = LLONG_MIN;

        for (int i = 0; i < n - 1; i++)
            ans = max(ans, prefix[i] - suffixMin[i + 1]);

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-score-of-a-split/)