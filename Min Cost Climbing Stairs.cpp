class Solution {
public:
    int solve(vector<int>&cost , int index,vector<int>&dp){

        if(index>=cost.size())return 0;
        if(dp[index]!=-1) return dp[index];
        int skip=cost[index]+solve(cost,index+2,dp);
        int notskip=cost[index]+solve(cost,index+1,dp);
        return dp[index]=min(skip,notskip);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        return min(solve(cost,0,dp),solve(cost,1,dp));
    }
};
