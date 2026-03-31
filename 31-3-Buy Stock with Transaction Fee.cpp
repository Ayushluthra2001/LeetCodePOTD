class Solution {
  public:
    int solve(vector<int>&arr ,int k ,int curr,int index,vector<vector<int>>&dp){
        if(index>=arr.size()) return 0;
        int skip = 0 , x = 0 , y = 0;
        if(dp[index][curr] != -1) return dp[index][curr];
        if(curr == 0){
            x =  -arr[index]   + solve(arr, k , 1,index+1,dp);
            skip = solve(arr, k , 0, index+1,dp);
            return dp[index][curr] = max(x, skip);
        }else{
            y =  arr[index]   - k +   solve(arr, k , 0 , index+1,dp);
            skip = solve(arr, k , 1 , index+1,dp);
            return dp[index][curr] =  max(y ,skip);
        }
        return 0;
    }
    int maxProfit(vector<int>& arr, int k) {
        // Code here
        vector<vector<int>>dp(arr.size(), vector<int>(2,-1));
        
        return solve(arr, k,0,0,dp);
        
    }
};
