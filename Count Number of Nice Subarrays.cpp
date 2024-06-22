class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int>mapping;
        mapping[0]=1;
        int oddCount=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]%2!=0) oddCount++;
            int t=oddCount-k;
            if(mapping.find(t)!=mapping.end()){
                count+=mapping[oddCount-k];
                
            }
                mapping[oddCount]++;
            
        }   
        return count;
    }
};
