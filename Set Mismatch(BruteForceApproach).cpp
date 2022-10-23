class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        int ans=-1;
        int index=-1;
        for(auto i: mapping){
            if(i.second==2) {
                ans=i.first;
                break;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mapping.count(i)==0){
                return {ans,i};
            }
        }
        return {};
    }
};
