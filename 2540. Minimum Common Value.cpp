class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mapping;
        for(auto i : nums1){
            mapping[i]++;
        }
        int mini=INT_MAX;
        for(auto i : nums2){
            if(mapping[i]>=1){
                mini=min(mini,i);
            }
        }
        return mini==INT_MAX ? -1 : mini;
    }
};
