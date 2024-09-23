class Solution {
public:
    int solve(int currIndex , string s, unordered_set<string>&st , int n, vector<int>& dp){
        if(currIndex >= n) return 0;

        if(dp[currIndex] != -1) return dp[currIndex];
        int result = 1 + solve(currIndex +1 , s , st , n , dp);
        
        for(int j = currIndex; j<n; j++){
            string sub = s.substr(currIndex , j-currIndex+1);
            if(st.count(sub)){
                result = min(result , solve(j+1,s,st,n,dp));
            }
        }

        return dp[currIndex] = result;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string>st;
        for(auto i : dictionary) st.insert(i);
        
        int n = s.length();
        vector<int>dp(n+1 , -1);
        return solve(0 ,  s , st, n  , dp );
    }
};                                                                                              
