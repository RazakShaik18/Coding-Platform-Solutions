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