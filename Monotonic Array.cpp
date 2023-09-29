class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool ins =true;
        bool dec=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                ins =false;
                break;
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) {
                dec=false;
                break;
            }
        }
        if(ins || dec ) return true;
        return false;
    }
};
