class Solution {
public:
    bool solve(int index,vector<int>&nums,vector<int>&dp){
        if(index>=nums.size()) return false;
        if(index==nums.size()-1) return true;
        if(nums[index]==0) return false;
        if(dp[index]!=-1) return dp[index];
        int curr=nums[index];
        bool res=false;
        for(int i=1;i<=curr;i++){
            res=res || solve(index+i,nums,dp);
        }
        return dp[index]=res;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        int index=0;
        return solve(index,nums,dp);
    }
};
