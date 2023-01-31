class Solution {
public:
    int solve(int prev,int curr,vector<vector<int>>&pair){
        if(curr==pair.size()) return 0;
        int include=0,exclude=0;
        if(prev==-1 || pair[curr][1]>=pair[prev][1]){
            include+=pair[curr][1]+solve(curr,curr+1,pair);
            
        }
        exclude=solve(prev,curr+1,pair);
        return max(include,exclude);
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<vector<int>>pair;
        for(int i=0;i<scores.size();i++){
            pair.push_back({ages[i],scores[i]});
        }
        sort(pair.begin(),pair.end());
        int prev=-1,curr=0;
        return solve(prev,curr,pair);
    }
};
