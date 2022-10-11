class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        int first=INT_MAX;
        int second=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>second) return true;
            else if(nums[i]>first && nums[i]<second) second=nums[i];
            else if(nums[i]<first) first=nums[i];
        }
        return false;
    }
};
