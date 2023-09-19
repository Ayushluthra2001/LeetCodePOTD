class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int val=nums[0];
        for(int i=1;i<nums.size();i++){
            val=val^nums[i];
        }
        for(int i=1;i<nums.size();i++){
            val=val^i;
        }
        return val;
    }
};
   
