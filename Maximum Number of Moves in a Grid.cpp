class Solution {
public:
    int solve(vector<vector<int>>&grid , int i , int j , int n , int m,vector<vector<int>>&dp ){
        
        if(i<0 || j<0) return 0;
        if(i>=n || j>=m) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int dig = 0 , digUp = 0  , right = 0;

        if(j+1< m){
            if(grid[i][j+1] > grid[i][j]) right = 1 + solve(grid, i,j+1,n,m,dp);
        }
        if(i-1>=0 && j+1 < m){
            if(grid[i-1][j+1] > grid[i][j]) digUp = 1 + solve(grid, i-1,j+1,n,m,dp);
        }
        if(i+1 < n && j+1< m){
            if(grid[i+1][j+1] > grid[i][j]) dig = 1 + solve(grid, i+1,j+1,n,m,dp);
        }

        return dp[i][j] = max(dig , max(right , digUp ));
    }
    int maxMoves(vector<vector<int>>& grid) {

        
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        

        int i = 0;
            for(int j =0; j<n; j++){
                
                 ans =  max(ans,solve(grid, j , i , n , m,dp));
                
            }
        
       
        return ans;
    }
};
