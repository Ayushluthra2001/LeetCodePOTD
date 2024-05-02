class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums){
            if(i<0) mapping[abs(i)]++;
        }
        int maxi=-1;
        for(auto i : nums){
            if(mapping.find(i)!=mapping.end())  maxi=max(maxi,i);
            
        }
        return maxi;
    }
};
