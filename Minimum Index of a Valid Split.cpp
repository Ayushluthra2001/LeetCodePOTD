class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int m=0,j=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(j==0){
                m=nums[i];
                j++;
            }
            else if(m==nums[i]){
                j++;
            }
            else j--;
        }
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==m){
                cnt2++;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==m){
                cnt1++;
                cnt2--;
            }
            if(2*cnt1>(i+1) && 2*cnt2>(n-i-1)){
                return i;
            }
        }
        return -1;
    }
};
