# N-Queens

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

The  **n-queens**  puzzle is the problem of placing `n` queens on an `n x n` chessboard such that no two queens attack each other.

Given an integer `n`, return  *all distinct solutions to the  **n-queens puzzle***. You may return the answer in  **any order**.

Each solution contains a distinct board configuration of the n-queens' placement, where `'Q'` and `'.'` both indicate a queen and an empty space, respectively.

 

 **Example 1:** 

```
Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above

```

 **Example 2:** 

```
Input: n = 1
Output: [["Q"]]

```

 

 **Constraints:** 

- 1 <= n <= 9

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 71.73%)  
**Memory:** 10.1 MB (beats 77.14%)  
**Submitted:** 2026-10-14T12:13:57.817Z  

```cpp
class Solution {
public:
    // bool isValied(int row, int col , vector<string>&board, int n){
    //     //top 
    //     int tempr = row , tempc = col;
    //     while(tempr >= 0){
    //         if(board[tempr][col]=='Q') return false;
    //         tempr--;
    //     }
    //     //top left diagonal 
    //     tempr = row;
    //     while(tempr >=0 && tempc >=0){
    //         if(board[tempr][tempc] == 'Q') return false;
    //         tempr--;
    //         tempc--;
    //     }

    //     //top right diagonal
    //     tempr = row, tempc = col;
    //     while(tempr >= 0 && tempc < n){
    //         if(board[tempr][tempc]=='Q')return false;
    //         tempr--;
    //         tempc++;

    //     }
    //     return true;
    // }
    void Solve(int row,vector<vector<string>>&all_arrangements,vector<string>&board, int n,vector<int>&c,vector<int>&rd,vector<int>&ld){
        //base case
        if(row == n){
            all_arrangements.push_back(board);
            return;
        }

        for(int col = 0 ; col < n ; col++){
            if(c[col]==0 && rd[row+col]==0 && ld[row-col + (n-1)]==0){
                c[col] = 1 , rd[row+col] = 1 , ld[row-col + (n-1)]=1;
                board[row][col] = 'Q';
                Solve(row+1,all_arrangements,board,n,c,rd,ld);
                board[row][col] = '.';
                c[col] = 0 , rd[row+col] = 0 , ld[row-col + (n-1)]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>all_arrangements;
        vector<string>board;
        for(int i = 0 ; i < n ; i++){
            string s;
            for(int j = 0 ; j < n ; j++){
                s+='.';
            }
            board.push_back(s);
        }
        /*
        [". Q . ." ,
         ". . . Q" , 
         "Q . . ." ,
         ". . Q ."]
        */
        vector<int>cols(n,0);
        vector<int>rd(2*n,0);
        vector<int>ld(2*n,0);
        Solve(0,all_arrangements,board,n,cols,rd,ld);
        return all_arrangements;
    }




};
```

---

[View on LeetCode](https://leetcode.com/problems/n-queens/)