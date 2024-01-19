class Solution {
public:
    int solve(int currRow,int currCol,vector<vector<int>>&matrix,vector<vector<int>>&dp){
        if(currRow>=matrix.size() || currCol>=matrix[0].size() || currRow<0 || currCol<0) return INT_MAX;
        if(dp[currRow][currCol]!=-1) return dp[currRow][currCol];
        int first,second,third;
        bool flag=false;
        int ans=INT_MAX;
        if(currRow+1<matrix.size() && currCol-1>=0){
            first=solve(currRow+1,currCol-1,matrix,dp);
            flag=true;
        }
        if(flag){
            ans=min(ans,first);
            flag=false;
        }
       if(currRow+1<matrix.size() && currCol>=0){
           second=solve(currRow+1,currCol,matrix,dp);
           flag=true;
       }
       if(flag){
            ans=min(ans,second);
            flag=false;
        }
       
         
        if(currRow+1<matrix.size() && currCol+1<matrix[0].size()){
            third=solve(currRow+1,currCol+1,matrix,dp);
            flag=true;
        }
        
        if(flag){
            ans=min(ans,third);
            flag=false;
        }
        if(ans==INT_MAX)ans=0;
        
        
       
        return dp[currRow][currCol]=matrix[currRow][currCol]+ans;

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size()+1,vector<int>(matrix[0].size()+1,-1));
        int mini=INT_MAX;
        for(int i=0;i<matrix.size();i++){
           int x=solve(0,i,matrix,dp);
          // cout<<x<<endl;
            mini=min(mini,x);
        }
        return mini;
    }
};
