class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int move=0;
       for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int more=abs(nums[i]-nums[i-1])+1;
                nums[i]+=more;
                move+=more;
                
            }
       } 
       return move;
    }
};
