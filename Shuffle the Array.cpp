class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int s=0,s1=n;
        while(s<n && s1<2*n){
            ans.push_back(nums[s++]);
            ans.push_back(nums[s1++]);
        }
        return ans;
    }
};
