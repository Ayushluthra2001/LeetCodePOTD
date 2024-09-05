class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>ans(n,0);

        int sum = 0;
        for(auto i : rolls) sum += i;
       
        
        int want = ((n + rolls.size()) * mean )- sum ;
        int maxi = 6 * n ;
        if(want <=0) return {};
        cout<<"sum is "<<sum<<" want is :" <<want<<endl;
        if(want > maxi) return {};
        if(want < n) return {};
        int i =0;
        while( want > 0){
            
            ans[i]+=1;
            i = (i+1) %n;
            want--;

        }
        



        return ans;
    }
};
