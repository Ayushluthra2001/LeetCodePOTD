class Solution {
public:
    int solve(vector<int>&satisfaction,int x, int i,vector<vector<int>>& dp){
        if(i>=satisfaction.size()) return 0;
        if(dp[x][i]!=-1) return dp[x][i];
        int include=x*satisfaction[i]+solve(satisfaction,x+1,i+1,dp);
        int exclude=solve(satisfaction,x,i+1,dp);
        return dp[x][i]=max(include,exclude);
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        int maxi=0;
        vector<vector<int>>dp(satisfaction.size()+1,vector<int>(satisfaction.size()+1,-1));
        sort(satisfaction.begin(),satisfaction.end());
        maxi=solve(satisfaction,1,0,dp);
        return maxi;

    }
};
