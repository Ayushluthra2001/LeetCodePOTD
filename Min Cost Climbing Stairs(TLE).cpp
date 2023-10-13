class Solution {
public:
    int solve(vector<int>&cost , int index){
        if(index>=cost.size())return 0;
        int skip=cost[index]+solve(cost,index+2);
        int notskip=cost[index]+solve(cost,index+1);
        return min(skip,notskip);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(solve(cost,0),solve(cost,1));
    }
};
