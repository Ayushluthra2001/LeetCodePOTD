class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums) mapping[i]++;
        vector<int>ans;
        for(auto i : mapping) if(i.second==1) ans.push_back(i.first);
        return ans;
    }
};
