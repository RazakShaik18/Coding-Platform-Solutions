class Solution {
    public int[] lastVisitedCell(char[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        boolean[][] vis = new boolean[n][m];
        int res = 0, c = 0;
        while(true){
            vis[res][c] = true;
            int nres = res,nc = c;
            if(grid[res][c] == 'R') nc++;
            else if(grid[res][c]=='L') nc--;
            else if(grid[res][c]=='U') nres--;
            else if(grid[res][c]=='D') nres++;

            if(nres<  0|| nres>=n||nc<  0|| nc>=m){
                break;
            }
            if(vis[nres][nc]){
                break;
            }
            res = nres;
            c = nc;
        }
        return new int[]{res,c};
    }
}