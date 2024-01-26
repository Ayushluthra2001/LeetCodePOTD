class Solution {
public:
int mod = pow(10,9) + 7;
int solve( int m ,int n , int  k , int i , int j,vector<vector<vector<int>>>&dp,int moves){
    
    if(i < 0 || j < 0 || i >= m || j >= n){
            return 1;
        }
    if(moves==k) return 0;
    if(dp[moves][i][j]!=-1) return dp[moves][i][j]%mod;
    int total=0;
    total+=solve(m,n,k,i,j-1,dp,moves+1)%mod;
    total+=solve(m,n,k,i,j+1,dp,moves+1)%mod;
    total+=solve(m,n,k,i-1,j,dp,moves+1)%mod;
    total+=solve(m,n,k,i+1,j,dp,moves+1)%mod;
    
    
     dp[moves][i][j]=total;
    return dp[moves][i][j]%mod;
}
    int findPaths(int m, int n, int k, int i, int j) {
       
       vector<vector<vector<int>>> dp(k + 1, vector<vector<int>> (m + 1, vector<int> (n + 1, -1)));
        dp[k][m][n]= solve(m,n,k,i,j,dp,0);
        return dp[k][m][n];
    }
};
