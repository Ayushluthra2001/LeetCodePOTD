class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]) count++;
            }
        }
        return count;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // // int count=0;
        // // for(int i=0;i<nums.size();i++){
        // //     for(int j=i+1;j<nums.size();j++){
        // //         if(nums[i]==nums[j]) count++;
        // //     }
        // // }
        // // return count;
        // int total=0;
        // map<int,int>mapping;
        // for(int i=0;i<nums.size();i++){
        //     mapping[nums[i]]++;
        // }
        
        // for(auto i:mapping){
        //     int k=i.second*(i.second-1)/2;
        //     k=floor(k);
        //     total+=k;
        // }
        
        // return total;
    }
    
};
