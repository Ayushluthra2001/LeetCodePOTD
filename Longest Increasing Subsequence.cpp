class Solution {
public:
int solve(int currIndex,int prev ,vector<int>&nums,vector<vector<int>>&dp){
    if(currIndex>=nums.size()) return 0;
    int include=0,notInclude=0;
    if(dp[currIndex][prev+1]!=-1)return dp[currIndex][prev+1];
    if(prev==-1){
        include= 1 + solve(currIndex+1, currIndex,nums,dp);
    }else{
        if(nums[currIndex]>nums[prev])
        include= 1 + solve(currIndex+1,currIndex,nums,dp);
    }
    notInclude=solve(currIndex+1,prev,nums,dp);
    
    
    return dp[currIndex][prev+1]=max(include,notInclude);
}
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return solve(0,-1,nums,dp);
    }
};
