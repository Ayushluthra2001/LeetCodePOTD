class Solution {
public:
    bool solve(vector<vector<char>>&grid, int i , int j , int openCount,int n , int m,vector<vector<vector<int>>>&dp){
        if(i>=n || j>=m || openCount < 0) return false;
        if(i == n-1 && j==m-1 ){
            int current = grid[i][j] == '(' ?1 : -1;

            if(openCount + current == 0) return true;
             return false;
        }
        if(dp[i][j][openCount] !=-1) return dp[i][j][openCount];
        int current = grid[i][j]=='(' ? 1 : -1;
        bool down  =  solve(grid,i+1,j,openCount+current,n,m,dp);
        bool right =  solve(grid,i,j+1,openCount+current,n,m,dp);
        return dp[i][j][openCount] = down || right;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(1001,-1)));
        return solve(grid, 0 , 0 , 0,n,m,dp);
    }
};
