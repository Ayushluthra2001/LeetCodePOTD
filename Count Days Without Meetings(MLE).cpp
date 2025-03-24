class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        vector<int>day(days+1,0);
        vector<vector<int>>op;
        op.push_back(meetings[0]);
        for(int i=1; i<meetings.size(); i++){
            int first =  meetings[i][0];
            int second = op[op.size()-1][1];
            //cout<<first<<" "<<second<<endl;
            if(first <= second){
                int start = op[op.size()-1][0];
                int end =max(meetings[i][1],op[op.size()-1][1]);
                op[op.size()-1] = {start,end};
            }else{
                op.push_back(meetings[i]);
            }
        }


        
        for(auto i : op) cout<<i[0]<<" "<<i[1]<<endl;
        cout<<endl;

        for(int i = 0; i<op.size(); i++){
            int start =op[i][0];
            int end = op[i][1];
            for(int ii=start; ii<=end; ii++) day[ii]++;
        }
        int count = 0;
        for(int i =1; i<=days; i++) if(day[i]==0) count++;
        return count++;


    }
};

