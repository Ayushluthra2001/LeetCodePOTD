class Solution {
public:
    int solve(int n , int copyPaste  , int currLength , vector<vector<int>>&dp){
        //if(copyPaste > n) return 1e5;
        if(currLength == n) return 0;
        if(currLength > n) return 1e5;

        if(dp[currLength][copyPaste] != -1) return dp[currLength][copyPaste];

        int newCopy = 2 + solve(n ,  currLength , currLength+currLength ,dp);
        int paste = 1 + solve(n,copyPaste,currLength + copyPaste , dp);

        return dp[currLength][copyPaste] = min(newCopy , paste);
    }
    int minSteps(int n) {
       if(n == 1) return 0; 
       vector<vector<int>>dp(n,vector<int>(n,-1));
       return 1 + solve(n,1,1,dp);
    }
};
