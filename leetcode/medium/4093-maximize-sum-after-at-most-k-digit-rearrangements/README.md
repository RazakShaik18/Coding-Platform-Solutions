# Maximize Sum After At Most K Digit Rearrangements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `k`.

In one operation, you may choose any element of `nums` and  **rearrange**  its decimal digits in any order to form a new integer.

Return the  **maximum**  possible sum of the array after performing  **at most**  `k` operations.

 

 **Example 1:** 

 **Input:**  nums = [123,45], k = 1

 **Output:**  366

 **Explanation:** 

- We choose nums[0] = 123 and rearrange its digits to form 321.
- The array becomes [321, 45]. Thus, the total sum is 321 + 45 = 366.

 **Example 2:** 

 **Input:**  nums = [102,90,14], k = 2

 **Output:**  341

 **Explanation:** 

- We choose nums[0] = 102 and rearrange its digits to form 210.
- We choose nums[2] = 14 and rearrange its digits to form 41.
- The array becomes [210, 90, 41]. Thus, the total sum is 210 + 90 + 41 = 341.

 

 **Constraints:** 

- 1 <= n == nums.length <= 105
- 1 <= nums[i] <= 109
- 1 <= k <= n

## Solution

**Language:** Java  
**Runtime:** 173 ms (beats 25.00%)  
**Memory:** 91.5 MB (beats 75.00%)  
**Submitted:** 2026-10-26T16:20:51.773Z  

```java
class Solution {
    public long maximizeSum(int[] nums, int k) {
        int n = nums.length;
        long total = 0;
        long[] gains = new long[n];
        for(int i =  0; i<n;i++){
            total+=nums[i];
            char[] d = String.valueOf(nums[i]).toCharArray();
              Arrays.sort(d);
            long best = 0;
            for(int j = d.length-1;j>=0;j--  ){
               best = best * 10+(d[j]-'0');
            }
            
            gains[i] = best - nums[i];
        }
        Arrays.sort(gains);
        for(int i = n-1;i>=n-k;i--){
            total += gains[i];
        }
        return total;
        
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/maximize-sum-after-at-most-k-digit-rearrangements/)