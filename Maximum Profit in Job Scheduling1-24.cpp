class Solution {
public:
int n;
int getnextindex(vector<vector<int>>&a,int l , int cje){
    int r=n-1;
    int res=n+1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid][0]>=cje){
            res=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }

    }
    return res;
}
int solve(vector<vector<int>>&a,int index,vector<int>&dp){
    if(index>=n) return 0;
    if(dp[index]!=-1)return dp[index];
    int next=getnextindex(a,index+1,a[index][1]);
    int take=a[index][2]+solve(a,next,dp);
    int nottake=solve(a,index+1,dp);
    return dp[index]=max(take,nottake);
}
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n=startTime.size();
        vector<int>dp(n+1,-1);
        vector<vector<int>>a(n,vector<int>(3,0));
        for(int i=0;i<n;i++){
            a[i][0]=startTime[i];
            a[i][1]=endTime[i];
            a[i][2]=profit[i];
        }
        auto comp=[&](auto & vec1,auto& vec2){
            return vec1[0]<=vec2[0];
        };
        sort(a.begin(),a.end(),comp);
        return solve(a,0,dp);
    }
};
