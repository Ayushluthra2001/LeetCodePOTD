class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int i = nums.size()-1;
        int count = 0;
        unordered_map<int,int>mapping;
        while(i>=0  ){
            
            if(mapping.find(nums[i])== mapping.end()) count++;
            else return (nums.size()-count)%3==0 ? (nums.size()-count)/3: (nums.size()-count)/3 + 1; 
            mapping[nums[i]]++;
            i--;
        }
       
        if(i==0) return 0;
        int rest = nums.size()-count;
        return rest /3  ;

    }
};
