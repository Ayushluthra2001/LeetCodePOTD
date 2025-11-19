class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>mapping;
        for(auto i : nums) mapping[i]++;
         while(true){
            if(mapping.find(original)!=mapping.end()){
                original*=2;
            }else return original;
         }

         return -1;
    }
};
