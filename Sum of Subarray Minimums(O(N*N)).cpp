class Solution {
public:
    #define mod 1000000007;
    int sumSubarrayMins(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int mini=arr[i];
            for(int j=i;j<arr.size();j++){
                mini=min(mini,arr[j]);
               sum=(sum+mini)%mod;
            }
        }
        return sum;
    }
};
