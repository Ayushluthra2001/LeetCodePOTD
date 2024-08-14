class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(),nums.end());
        vector<int>dp(maxi+1,0);
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int diff = abs(nums[i] - nums[j]);

                dp[diff]++; // storing count of difference 
            }
        }

        for(int i=0; i<maxi + 1; i++){
            k-=dp[i];
            if(k<=0) return i;
        }

        return -1;
    }
};
