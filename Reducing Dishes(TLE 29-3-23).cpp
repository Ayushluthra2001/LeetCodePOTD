class Solution {
public:
    int solve(vector<int>&satisfaction,int x, int i){
        if(i>=satisfaction.size()) return 0;
        int include=x*satisfaction[i]+solve(satisfaction,x+1,i+1);
        int exclude=solve(satisfaction,x,i+1);
        return max(include,exclude);
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        int maxi=0;
        sort(satisfaction.begin(),satisfaction.end());
        maxi=solve(satisfaction,1,0);
        return maxi;

    }
};
