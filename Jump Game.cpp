class Solution {
public:
    bool solve(int index,vector<int>&nums,vector<int>&dp){
        if(index>=nums.size()) return false;
        if(index==nums.size()-1) return true;
        if(dp[index]!=-1) return dp[index];
        bool ans=false;
        for(int i=1;i<=nums[index];i++){
            ans=ans||solve(index+i,nums,dp);
            if(ans==true)break;
        }
        return dp[index]=ans;
    }
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        vector<int>dp(nums.size()+1,-1);
       return solve(0,nums,dp);
    }
};
