class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xorr=nums[0];
        for(int i=1;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
       int diff=(xorr^k);
       return __builtin_popcount(diff);
       
    }
};
