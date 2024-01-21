class Solution {
public:
    int solve(vector<int>&nums,int currIndex,vector<int>&dp){
        if(currIndex>=nums.size()) return 0;
        if(dp[currIndex]!=-1) return dp[currIndex];
        int first=nums[currIndex]+solve(nums,currIndex+2,dp);
        int second=solve(nums,currIndex+1,dp);
        return dp[currIndex]= max(first,second);

    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,dp);
    }
};
