class Solution {
    private:
    int solve(int ind, int buy,vector<int>&prices,vector<vector<int>>&dp){
        if(ind>=prices.size()) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy==1){
            return dp[ind][buy]=max(-prices[ind]+solve(ind+1,0,prices,dp), 0+solve(ind+1,1,prices,dp));
        }else{
            return dp[ind][buy]=max(prices[ind]+solve(ind+2,1,prices,dp),0+solve(ind+1,0,prices,dp));
        }
    }
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1)); 
        return solve(0,1,prices,dp);
    }
};
