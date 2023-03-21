class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        vector<long long>dp(nums.size(),0);
        if(nums[0]==0) dp[0]=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==0){
                dp[i]=dp[i-1]+1;
            }
        }
        long long  count=0;
        for(int i=0;i<nums.size();i++){
            count+=dp[i];
        }
        return count;
    }
};
