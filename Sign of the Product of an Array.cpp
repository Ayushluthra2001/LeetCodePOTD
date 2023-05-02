class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0;
        bool find=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) count++;
            if(nums[i]==0) find=true;
        }
        if(find) return 0;
        if(count%2==0) return 1;
        return -1;
    }
};
