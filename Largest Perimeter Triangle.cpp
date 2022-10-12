class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       
        sort(nums.begin(),nums.end(),greater<int>());
        int s1=0,s2=0,s3=0;
        for(int i=0;i<=nums.size()-3;i++){
            s1=nums[i];
            s2=nums[i+1];
            s3=nums[i+2];   
            if(s2+s3>s1 && s3+s1>s2 && s2+s1>s3) return s3+s2+s1;
        }
     return 0;
    }
};
