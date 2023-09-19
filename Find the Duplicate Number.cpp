class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums){
            if(mapping[i]) return i;
            else mapping[i]++;
        }
        return -1;
            }
};
