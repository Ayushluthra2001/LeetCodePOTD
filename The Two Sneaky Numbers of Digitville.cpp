class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(int i = 0; i<nums.size(); i++) mapping[nums[i]]++;
        vector<int>ans;
        for(auto i : mapping){
            if(i.second==2) ans.push_back(i.first);
        }

        return ans;
    }
};
