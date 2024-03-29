class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i=0,j=0;
        int maxE=*max_element(nums.begin(),nums.end());
        long long ans=0;
        int maxCount=0;
        while(j<nums.size()){
            if(nums[j]==maxE) maxCount++;
            while(maxCount>=k){
                ans+=nums.size()-j;
                if(nums[i]==maxE) maxCount--;
                i++;
            }
            j++;
        }
        return ans;
    }
};
