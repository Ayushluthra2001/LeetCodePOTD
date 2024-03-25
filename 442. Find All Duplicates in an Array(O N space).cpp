class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mapping;
        vector<int>ans;
        for(auto i : nums){
            mapping[i]++;
        }
        for(auto i : mapping){
            if(i.second>=2) ans.push_back(i.first);
        }
        return ans;
    }
};
