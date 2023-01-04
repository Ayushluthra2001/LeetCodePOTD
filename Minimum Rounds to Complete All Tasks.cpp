class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mapping;
        for(auto i : tasks)
            mapping[i]++;
        int rounds=0;
        for(auto i : mapping){
            int n=i.second;
            if(i.second<=1) return -1;
            while(n>0){
                if(n-3>=0){
                    n=n-3;
                    rounds++;
                }else if(n-2>=0){
                    n=n-2;
                    rounds++;
                }else if(n==1){
                    n=n-1;
                    rounds++;
                }
            }
        }
        return rounds;

    }
};
