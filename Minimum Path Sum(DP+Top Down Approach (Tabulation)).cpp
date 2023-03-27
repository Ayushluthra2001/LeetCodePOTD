class Solution {
public:
    int solve(int i ,int j, vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i>=grid.size() || j>=grid[0].size()) return 100000000;
        if(i==grid.size()-1 && j==grid[0].size()-1)  return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int down=solve(i+1,j,grid,dp);
        int right=solve(i,j+1,grid,dp);
        
        return dp[i][j]=min(down+grid[i][j],right+grid[i][j]);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sum=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        sum=solve(0,0,grid,dp);
        return sum;
    }
};
