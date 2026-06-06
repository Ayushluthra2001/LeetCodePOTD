class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalSum = 0;
        int currSum = 0;
        vector<int>result(nums.size(),0);
        for(int i =0; i<nums.size(); i++) totalSum+=nums[i];
        for(int i =0; i<nums.size(); i++){
            currSum += nums[i];
            result[i] = abs(totalSum - currSum);
            totalSum -= nums[i];
        } 

        return result;
    }
};
