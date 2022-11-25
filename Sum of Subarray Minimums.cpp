class Solution {
public:
    #define mod 1000000007;
    int sumSubarrayMins(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                int mini=INT_MAX;
                for(int k=i;k<=j;k++){
                    
                    mini=min(mini,arr[k]);
                }
                sum=(sum+mini)%mod;
            }
        }
        return sum;
    }
};
