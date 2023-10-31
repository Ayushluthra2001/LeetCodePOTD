class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int p=pref[0];
    
        for(int i=1;i<pref.size();i++){
           
            pref[i]=pref[i]^p;
            p=p^pref[i];
            //cout<<pref[i]<<" "<<pref[i-1]<<endl;
            
        }
        

    
        return pref;
    }
};
