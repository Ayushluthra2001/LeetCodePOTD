class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int mini = *min_element(nums.begin(),nums.end());
        unordered_map<int,int>mapping;
        for(auto i : nums) mapping[i]++;

        if(mini == k) return mapping.size()-1;
        if(k > mini ) return -1;
        return mapping.size();
    }
};
