class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        int curr=0;
        for(int i=0;i<nums.size();i++){
            //cout<<curr<<" "<<nums[i]<<endl;
            if(curr!=nums[i]) return curr;
            curr++;
        }
        return nums.size();
    }
};
