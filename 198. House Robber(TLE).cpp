class Solution {
public:
int solve(vector<int>&nums,int index){
    if(index>=nums.size()) return 0;
    int include=0,notInclude=0;
    include=nums[index]+solve(nums,index+2);
    notInclude=solve(nums,index+1);
    return max(include,notInclude);
}
    int rob(vector<int>& nums) {
        
        return solve(nums,0);
    }
};
