class Solution {
public:
    int solve(vector<int>&nums,int currIndex){
        if(currIndex>=nums.size()) return 0;
        int first=nums[currIndex]+solve(nums,currIndex+2);
        int second=solve(nums,currIndex+1);
        return max(first,second);
        
    }
    int rob(vector<int>& nums) {
        return solve(nums,0);
    }
};
