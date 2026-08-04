class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n = nums.size();
        int j =0;
        int start = nums[0];
        int end = nums[nums.size()-1];
        for(int i =start; i<=end;i++){
            if(i == nums[j])j++;
            else {
                ans.push_back(i);

            }
        }

        return ans;
        
    }
};
