class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long  sum = 0;
        for(auto i : chalk) sum+=i;
        if( k >=sum) k = k %sum;
        int i =0;
        int n = chalk.size();
        while(k >= chalk[i]){
            
            
            
            
            k-=chalk[i];
           // cout<<i<<" "<<k<<endl;
            i++;
            if (i == n){
                i = 0;
            }
        }
        if(i== n) i = 0;

        return i;
    }
};
