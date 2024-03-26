class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       // int maxi=INT_MIN;
       // int mini=INT_MAX;
        
        unordered_map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            //mini=min(mini,nums[i]);
            //maxi=max(maxi,nums[i]);
            mapping[nums[i]]++;
        }
        
        int smallestNumber=1;
        for(auto i : mapping){
            if(mapping.find(smallestNumber)==mapping.end()) return smallestNumber;
            smallestNumber++;
        }
        return smallestNumber;
        
    }
};
