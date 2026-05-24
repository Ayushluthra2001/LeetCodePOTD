class Solution {
public:
    int maxJumps(vector<int>&arr,int d, int currIndex,vector<int>&dp){
        if(dp[currIndex] != -1) return dp[currIndex];
        
        int maxi = 1;
       // left side
       for(int i = currIndex-1; i>=max(0 ,currIndex-d); i--){
         if(arr[i] >= arr[currIndex]) break;
         maxi = max(maxi , 1 + maxJumps(arr, d, i,dp));
       }
        // right side
        int n = arr.size();
       for(int i = currIndex+1; i<= min(n-1,currIndex+d); i++){
         if(arr[i] >= arr[currIndex]) break;
         maxi = max(maxi , 1 + maxJumps(arr, d, i,dp));
       }

        return dp[currIndex] =  maxi;
    }
    int maxJumps(vector<int>& arr, int d) {
        vector<int>dp(arr.size()+1, -1);
        int ans = 1;
        for(int i =0; i<arr.size(); i++){

           
            ans  =  max(ans,  maxJumps(arr,d,i,dp));
            //resultArr[i] = find;
           
        }
        return ans;
        // return *max_element(resultArr.begin(),resultArr.end());
    }
};
