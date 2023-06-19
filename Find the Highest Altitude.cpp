class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxi=gain[0];
        
        
        maxi=max(maxi,0);
        for(int i=1;i<gain.size();i++ ){
            gain[i]=gain[i]+gain[i-1];
            maxi=max(gain[i],maxi);
        }
    return maxi;    
    }

};
