class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        unordered_map<int,int>mapping;
        mapping[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            if(mapping[rem]){
                count+=mapping[rem];
                mapping[rem]++;
            }else{
                mapping[rem]=1;
            }
        }
        return count;
    }
};
