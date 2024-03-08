class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=0;
        int count=0;
        unordered_map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
            maxi=max(maxi,mapping[i]);

        }
        for(auto i: mapping){
            if(i.second==maxi) count+=i.second;
        }
        return count;
    }
};
