class Solution {
public:
    void sortColors(vector<int>& nums) {
       int count1=0,count2=0,count0=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0)count0++;
        else if(nums[i]==1) count1++;
        else count2++; 
       } 
       int i=0;
       while(i<nums.size()){
            if(count0>0){
                nums[i]=0;
                count0--;
            }else if(count1>0){
                nums[i]=1;
                count1--;
            }else {
                nums[i]=2;
                count2--;
            }
            i++;
       }
    }
};
