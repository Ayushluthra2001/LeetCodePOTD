class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        if(nums.size()<=3) return 0;
        int mini = INT_MAX;

        int firstPossibility  = nums[nums.size()-4] - nums[0];
        int secondPossibility = nums[nums.size()-1] - nums[3];
        int thirdPossibility  = nums[nums.size()-3] - nums[1];
        int fourthPossibiity  = nums[nums.size()-2] - nums[2];
        mini = min(mini, firstPossibility);
        mini = min(mini, secondPossibility);
        mini = min(mini, thirdPossibility);
        mini = min(mini, fourthPossibiity);
         
        return mini;
    }
};
