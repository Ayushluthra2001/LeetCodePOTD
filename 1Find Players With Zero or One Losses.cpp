class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,bool>lostornot;
        unordered_map<int,int>lost;
        for(auto i : matches){
            int winner=i[0];
            int loser=i[1];
            if(lostornot.find(winner)==lostornot.end()){
                lostornot[winner]=false;
            }
            lostornot[loser]=true;
            lost[loser]++;
        }
        vector<int>winner;
        vector<int>lostone;
        for(auto i : lostornot){
            if(i.second==false) winner.push_back(i.first);
        }
        for(auto i : lost){
            if(i.second==1) lostone.push_back(i.first);
        }
        sort(winner.begin(),winner.end());
        sort(lostone.begin(),lostone.end());
        return {winner,lostone};

       
    }
};
