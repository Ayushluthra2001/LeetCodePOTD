class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mapping;
        vector<int>result;

        for(auto i : nums1) mapping[i]++;

        for(int i=0; i<nums2.size(); i++){
            
            if(mapping.find(nums2[i]) != mapping.end() && mapping[nums2[i]] >= 1){
                result.push_back(nums2[i]);
                mapping[nums2[i]]--;
            }

        }
        return result;
    }
};
