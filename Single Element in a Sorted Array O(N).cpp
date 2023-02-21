class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xorr=nums[0];
        for(int i=1;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }
};
