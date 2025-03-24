class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        vector<int>day(days+1,0);
        for(int i = 0; i<meetings.size();i++){
            int start= meetings[i][0];
            int end= meetings[i][1];
            for(int ii =start; ii<=end;ii++){
                day[ii]=1;
            }
        }


        int count = 0;
        for(int i =1;i<day.size();i++){
            if(day[i]==0) {
                cout<<i<<" ";
                count++;
            }
        }


        return count;
    }
};
