class Solution {
public:
    int solve(vector<int>&nums,int index,vector<int>&dp){
        if(index>=nums.size()) return INT_MAX;
        if(dp[index]!=-1) return dp[index];
        if(index==nums.size()-1) return 0;
        if(nums[index]==0) return INT_MAX;
        int mini=INT_MAX;
        for(int i=1;i<=nums[index];i++){
            int ans=solve(nums,index+i,dp);
            if(ans<=INT_MAX-1)
            mini=min(mini,1+ans);
        }
        return dp[index]=mini;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,dp);
    }
};
