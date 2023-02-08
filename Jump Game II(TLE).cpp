class Solution {
public:
    int solve(vector<int>&nums,int index){
        if(index>=nums.size()) return INT_MAX-10;
        if(index==nums.size()-1) return 0;
        if(nums[index]==0) return INT_MAX-10;
        
        int mini=INT_MAX;
        for(int i=1;i<=nums[index];i++){
            mini=min(mini,1+solve(nums,index+i));
        }
        return mini;
    }
    int jump(vector<int>& nums) {
        return solve(nums,0);
    }
};
