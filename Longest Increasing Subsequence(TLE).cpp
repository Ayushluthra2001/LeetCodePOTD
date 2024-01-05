class Solution {
public:
int solve(int currIndex,int prev ,vector<int>&nums){
    if(currIndex>=nums.size()) return 0;
    int include=0,notInclude=0;
    if(prev==-1){
        include= 1 + solve(currIndex+1, currIndex,nums);
    }else{
        if(nums[currIndex]>nums[prev])
        include= 1 + solve(currIndex+1,currIndex,nums);
    }
    notInclude=solve(currIndex+1,prev,nums);
    if(include==-1)return notInclude;
    
    return max(include,notInclude);
}
    int lengthOfLIS(vector<int>& nums) {
        return solve(0,-1,nums);
    }
};
