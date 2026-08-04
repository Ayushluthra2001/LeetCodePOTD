class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>present(101,0);
        vector<int>ans;
        int mini = nums[0];
        int maxi  =0;
        for(int i =0; i<nums.size(); i++){
                mini = min(mini , nums[i]);
                maxi = max(maxi , nums[i]);
                present[nums[i]] =1;
        }
        for(int i = mini; i<=maxi; i++){
            if(present[i] == 0) 
            ans.push_back(i);
        }
        return ans;
    }
};
