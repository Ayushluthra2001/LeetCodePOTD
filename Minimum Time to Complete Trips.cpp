class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        vector<long long >total(time.size(),0);
        int count=0;
        int buses=0;
        while(count<totalTrips){
            for(int i=0;i<time.size();i++){
                total[i]++;
            }
            // for(int i : total){
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            count=0;
            for(int i=0;i<total.size();i++){
                int val =total[i]/time[i];
                
                count+=val;

            }
            // cout<<count<<endl;
            buses++;
        }
        return buses;
    }
};
// [1 1 1]
// 1
// trip =0;
