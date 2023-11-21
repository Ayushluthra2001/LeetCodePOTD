class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        vector<int>reversed;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int rev=0;
            while(temp>0){
                rev=rev*10+temp%10;
                temp=temp/10;

            }
            reversed.push_back(rev);
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+reversed[j]==nums[j]+reversed[i]) count++;
            }
        }
        return count;
    }
};
