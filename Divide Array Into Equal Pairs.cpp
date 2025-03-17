class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mapping;
        int pair = nums.size()/2;
        for(auto i : nums){
            mapping[i]++;
        }
        for(auto i : mapping){
            if(i.second %2!=0) return false;
        }

        return true;
    }
};
