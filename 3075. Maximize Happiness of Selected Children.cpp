class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        sort(happiness.begin(),happiness.end());
        int b=0;
        int decrease=0;
        for(int i=happiness.size()-1;i>=0 && b<k;i--){
            if(happiness[i]-decrease>=0){
                //cout<<happiness[i]<<" "<<endl;
                ans+=happiness[i]-decrease;
            }
            
            
            b++;
            decrease++;

        }
        return ans;
    }
};
