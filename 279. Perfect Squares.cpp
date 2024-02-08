class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n<0) return INT_MIN;
        if(n==0){
            return  0;

        }
        if(dp[n]!=-1) return dp[n];
        int mini=INT_MAX;
        for(int i=1;i*i<=n;i++){
            int get=1+solve(n-i*i,dp);
            if(get>0){
                mini=min(mini,get);
            }
        }
        return dp[n]=mini;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        int mini=INT_MAX;
        return  solve(n,dp);
         
    }
};
