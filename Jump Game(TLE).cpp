class Solution {
public:
    bool solve(int index,vector<int>&nums){
        if(index>=nums.size()) return false;
        if(index==nums.size()-1) return true;
        if(nums[index]==0) return false;
        int curr=nums[index];
        bool res=false;
        for(int i=1;i<=curr;i++){
            res=res || solve(index+i,nums);
        }
        return res;
    }
    bool canJump(vector<int>& nums) {
        int index=0;
        return solve(index,nums);
    }
};
