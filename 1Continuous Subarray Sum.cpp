class Solution {
public:
    // 23 2 4 6 6 
    // 2  4 1 
   bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(), pretemp=0, sum=0;
        map<int,int> mods;
        for (int i=0; i<n; i++){
            sum = (sum + nums[i]) % k;  
            if (mods[sum]) return true;
            mods[pretemp] ++;
            pretemp = sum;
        }
        return false;
    }
};
