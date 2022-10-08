class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest=0;
        
        int diff=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int start=i+1;
            int end=nums.size()-1;
             while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==target) return sum;
                else if(abs(sum-target)<diff){
                    diff=abs(sum-target);
                    closest=sum;
                }
                if(nums[i]+nums[start]+nums[end]>target) end--;
                else start++;
                 
            }
        }
        return closest;
        
    }
};
