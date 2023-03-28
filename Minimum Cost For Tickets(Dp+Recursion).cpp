class Solution {
public:
    int solve(vector<int>&days,vector<int>&costs,int i,vector<int>&dp){
        if(i>=days.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int oneDay=costs[0]+solve(days,costs,i+1,dp);
        int j;
        for(j=i;j<days.size() && days[j]<days[i]+7;j++);

        int sevenDays=costs[1]+solve(days,costs,j,dp);
        
        for(j=i;j<days.size() && days[j]<days[i]+30;j++);

        int thirtyDays=costs[2]+solve(days,costs,j,dp);

        return dp[i]=min(oneDay,min(sevenDays,thirtyDays));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int mini=0;
        vector<int>dp(days.size(),-1);
        mini=solve(days,costs,0,dp);
        return mini;
    }
};
