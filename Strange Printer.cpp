class Solution {
public:

    int solve(int i,int j,string &s,vector<vector<int>>&dp)
    {

        if(i==j)
        {
            return 1;
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ans = INT_MAX;
        for(int k= i; k<=j-1; k++)
        {
        ans = min(ans,solve(i,k,s,dp) + solve(k+1,j,s,dp));
        }

        if(s[i]==s[j])
        {
            dp[i][j]=ans-1;
            return ans-1;
        }
        else
        {
            dp[i][j]=ans;
            return ans;
        }

    }

    int strangePrinter(string s) {
        

        int n = s.size();

        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

        int i = 0;
        int j = s.size()-1;

        int ans  = solve(i,j,s,dp);
        
        return ans;
    }
};
