class Solution {
public:
    int solve(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>&dp){
        if(j<0 || j>=matrix[0].size()) return 1e9;
        if(i==0){
            return matrix[i][j];
        } 
        if(dp[i][j]!=-1) return dp[i][j];
        int up=matrix[i][j]+solve(matrix,i-1,j,dp);
        int left=matrix[i][j]+solve(matrix,i-1,j-1,dp);
        int right=matrix[i][j]+solve(matrix,i-1,j+1,dp);
        return dp[i][j]=min(up,min(left,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minSum=INT_MAX;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<m;i++){
            minSum=min(minSum,solve(matrix,n-1,i,dp));
        }
        return minSum;
    }
};
