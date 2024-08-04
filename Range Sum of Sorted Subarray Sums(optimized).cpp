class Solution {
public:
  long long mod = 1000000007;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long>sums;
      
        for(int i=0; i<nums.size(); i++){
            long long  sum =0;
            for(int j=i; j<nums.size(); j++){
                sum = (sum + nums[j]) % mod;
                sums.push_back(sum);
            }
        }
        sort(sums.begin(), sums.end());
       
         int ans = 0;
        for(int i = left-1; i<=right-1 ;i++){
            ans = (ans  +sums[i]) % mod;
        }

        return ans;
        
    }
};
