class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        int x=nums.size()/3+1;
        for(auto i : mapping){
            if(i.second>=x) ans.push_back(i.first);
        }
        return ans;
    }
};
