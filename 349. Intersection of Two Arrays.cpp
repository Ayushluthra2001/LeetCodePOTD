class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mapping,mapping2;
        vector<int>ans;
        for(auto i : nums1){
            mapping[i]++;
        }
        for(auto i : nums2){
            mapping2[i]++;
        }
        for(auto i : mapping){
            if(mapping2[i.first]>=1) ans.push_back(i.first);
        }
        return ans;
    }
};
