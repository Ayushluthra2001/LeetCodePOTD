class Solution {
public:
    int solve(vector<int>&days,vector<int>&costs,int i){
        if(i>=days.size()) return 0;

        int oneDay=costs[0]+solve(days,costs,i+1);
        int j;
        for(j=i;j<days.size() && days[j]<days[i]+7;j++);

        int sevenDays=costs[1]+solve(days,costs,j);
        
        for(j=i;j<days.size() && days[j]<days[i]+30;j++);

        int thirtyDays=costs[2]+solve(days,costs,j);

        return min(oneDay,min(sevenDays,thirtyDays));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int mini=0;
        mini=solve(days,costs,0);
        return mini;
    }
};
