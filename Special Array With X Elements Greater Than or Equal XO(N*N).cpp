class Solution {
public:
    int specialArray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<=maxi;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i)count++;
            }
            if(count==i) return count;
        }
        return -1;
    }
};
