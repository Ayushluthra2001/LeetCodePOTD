class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans = INT_MIN;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int j=i+1;
            int k=j;
            int sum = 0;
            sum+=nums[i];
            ans = max(ans, sum);
            while((j%n)!=i){
               
                sum+=nums[(j%n)];
                 ans = max(ans, sum);
                j++;
            }
          
           
        }

        return ans;
    }
};
