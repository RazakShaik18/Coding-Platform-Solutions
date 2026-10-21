# Second Highest Salary

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Table: `Employee`

```
+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| salary      | int  |
+-------------+------+
id is the primary key (column with unique values) for this table.
Each row of this table contains information about the salary of an employee.

```

 

Write a solution to find the second highest  **distinct**  salary from the `Employee` table. If there is no second highest salary, return `null (return None in Pandas)`.

The result format is in the following example.

 

 **Example 1:** 

```
Input: 
Employee table:
+----+--------+
| id | salary |
+----+--------+
| 1  | 100    |
| 2  | 200    |
| 3  | 300    |
+----+--------+
Output: 
+---------------------+
| SecondHighestSalary |
+---------------------+
| 200                 |
+---------------------+

```

 **Example 2:** 

```
Input: 
Employee table:
+----+--------+
| id | salary |
+----+--------+
| 1  | 100    |
+----+--------+
Output: 
+---------------------+
| SecondHighestSalary |
+---------------------+
| null                |
+---------------------+

```

## Solution

**Language:** Python  
**Runtime:** 245 ms (beats 89.29%)  
**Memory:** 66.7 MB (beats 91.84%)  
**Submitted:** 2026-10-21T04:54:52.873Z  

```py
import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    salaries = employee["salary"].drop_duplicates().sort_values(ascending=False)

    ans = salaries.iloc[1] if len(salaries) >= 2 else None

    return pd.DataFrame({"SecondHighestSalary": [ans]})
```

---

[View on LeetCode](https://leetcode.com/problems/second-highest-salary/)