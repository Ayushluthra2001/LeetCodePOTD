class Solution {
public:
int solve(vector<vector<int>>&grid,int currRow,int currCol,vector<vector<int>>&dp){
    if(currRow>=grid.size() || currCol>=grid[0].size()) return INT_MAX;
    if(currRow==grid.size()-1 && currCol==grid[0].size()-1) return grid[currRow][currCol];
    if(dp[currRow][currCol]!=-1) return dp[currRow][currCol];
    int mini=INT_MAX;
    for(int j=0;j<grid[0].size();j++){
        int sum=INT_MAX;
        if(currCol!=j){
            sum=solve(grid,currRow+1,j,dp);
        }
        if(sum!=INT_MAX){
            mini=min(mini,sum);
        }
        
    }
    if(mini==INT_MAX) mini=0;
    return dp[currRow][currCol]=mini+grid[currRow][currCol];

}
    int minFallingPathSum(vector<vector<int>>& grid) {
        int mini=INT_MAX;
        vector<vector<int>>dp(grid.size(),vector<int>(grid.size(),-1));
        for(int j=0;j<grid[0].size();j++){
            int sum=solve(grid,0,j,dp);
            mini=min(mini,sum);
        }
        return mini;
    }
};
