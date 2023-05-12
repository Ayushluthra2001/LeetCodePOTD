class Solution {
public:
    long long solve(vector<vector<int>>&questions,int curr,vector<long long>&dp){
        if(curr>=questions.size()) return 0;
        if(dp[curr]!=-1) return dp[curr];
        long long skip=solve(questions,curr+1,dp);
        long long notskip=questions[curr][0]+solve(questions,curr+questions[curr][1]+1,dp);
       
        return dp[curr]=max(skip,notskip);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long >dp(questions.size()+1,-1);
            return solve(questions,0,dp);
    }
};
