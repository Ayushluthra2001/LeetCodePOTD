class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        int  curr = 0;
        for(int i =0; i<nums.size(); i++){
            curr=(curr*2)%5 + (nums[i])%5;
            if(curr%5==0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
