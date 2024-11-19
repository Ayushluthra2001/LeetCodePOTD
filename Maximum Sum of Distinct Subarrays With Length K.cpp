class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        int i = 0 , j = 0;
        long long sum = 0;
        long long currSum =0;
        unordered_set<int>st;

        while(j < nums.size()){
           
            while(st.count(nums[j])){
                currSum -=nums[i];
                st.erase(nums[i]);
                i++;
            }
             currSum+=nums[j];
             st.insert(nums[j]);
            if(j-i+1==k){
                sum = max(sum , currSum);
                currSum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            
            j++;
        
        }

        return sum;
    }
};
