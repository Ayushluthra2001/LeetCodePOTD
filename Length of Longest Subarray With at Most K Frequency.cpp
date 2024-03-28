class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=0;
        int i=0,j=0;
        int maxLength=1;
        unordered_map<int,int>mapping;
        while(j<nums.size()){
            
            if(mapping[nums[j]]<k){
                mapping[nums[j]]++;
               // maxi=mapping[nums[j]];
               maxLength=max(maxLength,j-i+1);
                j++;
                

            }else if(mapping[nums[j]]>=k){
                while( i<nums.size() && mapping[nums[j]]>=k){
                    mapping[nums[i]]--;
                    i++;
                }
            }
            
        }
        return maxLength;
    }
};
// [1,2,3,1,2,3,1,2]
// i=0;
