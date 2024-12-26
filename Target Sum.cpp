class Solution {
public:
    int solve(vector<int>& nums, int target ,int index,int curr){
        if(index >= nums.size()){
            if(curr == target) return 1;
            else return 0;
        }
        
        int plus = solve(nums, target , index+1 , curr+ nums[index]);
        int minus = solve(nums,target, index+1, curr- nums[index]);
        return  plus + minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
            
            return solve(nums, target,0,0);
    }
};
