# Q1. Find Mismatched Segments Between Two Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two strings `s1` and `s2` of the same length.

A  **mismatched segment**  is a  **maximal contiguous**  range of indices where the characters of `s1` and `s2` differ at every index.

Return a 2D array containing `[sub1, sub2]` for each mismatched segment, where `sub1` and `sub2` are the corresponding  **substrings**  from `s1` and `s2`, respectively. Return the segments in  **increasing**  order of their starting indices. If there are no mismatched segments, return an empty array.

A  **substring**  is a contiguous  **non-empty**  sequence of characters within a string.

 

 **Example 1:** 

 **Input:**  s1 = "earth", s2 = "empty"

 **Output:**  [["ar","mp"],["h","y"]]

 **Explanation:** 

- The characters at indices 1 and 2 differ, forming the mismatched segment ["ar","mp"].
- The characters at index 4 differ, forming the mismatched segment ["h","y"].

 **Example 2:** 

 **Input:**  s1 = "action", s2 = "nation"

 **Output:**  [["ac","na"]]

 **Explanation:** 

The characters at indices 0 and 1 differ, forming the mismatched segment `["ac","na"]`. All remaining characters are equal in both strings.

 **Example 3:** 

 **Input:**  s1 = "hot", s2 = "hot"

 **Output:**  []

 **Explanation:** 

The two strings are identical, so there are no mismatched segments.

 

 **Constraints:** 

- 1 <= s1.length == s2.length <= 100
- s1 and s2 consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 75.00%)  
**Memory:** 12.3 MB (beats 83.33%)  
**Submitted:** 2026-11-08T03:30:03.024Z  

```cpp
class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        int n = s1.size();
        int i = 0;
        while(i<n){
            if(s1[i]==s2[i]){
                i++;
                continue;
            }
            int start = i;
            while(i<n&&s1[i] != s2[i]){
                i++;
            }
            ans.push_back({
                s1.substr(start,i-start),s2.substr(start,i-start)
            });
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-mismatched-segments-between-two-strings/)