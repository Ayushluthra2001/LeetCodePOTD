class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mapping;
        map<int,vector<int>>mapping2;
        vector<int>ans;
        for(auto i : nums) mapping[i]++;
        
        for(auto i : mapping) mapping2[i.second].push_back(i.first);
        
        for(auto i : mapping2) {
             int x = i.first;
             vector<int>temp;
            for(auto j : i.second){
                    for(int k=0 ;k<x;k++){
                    temp.push_back(j);
                }
            }
            sort(temp.begin(),temp.end(),greater<int>());
            for(auto k : temp) ans.push_back(k);
           
           
        }
        return ans;
    }
};
