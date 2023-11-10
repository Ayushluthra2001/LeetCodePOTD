class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        vector<int>ans;
        for(auto i: mapping){
            if(i.second>=2) ans.push_back(i.first);
        }
        return ans;
    }
};
