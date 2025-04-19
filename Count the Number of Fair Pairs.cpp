class Solution {
public:
    long long countFairPairs(vector<int>& nums, int l, int u) {
        long long count=0;
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0;
        while(i<n){
            int num1=l-nums[i],num2=u-nums[i];
            int lowIdx=lower_bound(nums.begin(),nums.end(),num1)-nums.begin();
            int upIdx=upper_bound(nums.begin(),nums.end(),num2)-nums.begin();
            if(lowIdx>i)count+=lowIdx-i-1;
            if(upIdx>i)count+=n-upIdx;
            else count+=n-i-1;
            i++;
        }
        long long total=1LL*(1LL*n*(n-1))/2;

        return total-count;
    }
};
