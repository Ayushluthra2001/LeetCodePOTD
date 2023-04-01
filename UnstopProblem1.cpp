#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(vector<int>& price, int i,vector<int>&dp){
    if(i>=price.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    int include=price[i]+solve(price,i+2,dp);
    int exclude=solve(price,i+1,dp);
    return dp[i]=max(include,exclude);
}
int main() {
    int n;
    cin>>n;
    vector<int>price;
    vector<int>dp(n+1,-1);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        price.push_back(k);
    }
    cout<<solve(price,0,dp)<<endl;
    return 0;
}
