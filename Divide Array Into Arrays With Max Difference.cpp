class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<=nums.size()-3;i+=3){
            int first=nums[i];
            int second=nums[i+1];
            int third=nums[i+2];
            if(third-first<=k){
                ans.push_back({first,second,third});
            }else{
                return {};
            }

        }
        return ans;
    }
};
