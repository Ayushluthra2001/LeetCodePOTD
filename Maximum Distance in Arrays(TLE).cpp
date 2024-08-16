class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int ans = INT_MIN;
        
        for(int i=0; i<arrays.size(); i++){
           
            for(int j=0;    j<arrays.size(); j++){
                
                if(i!=j){
                    int first = arrays[i][0];
                    int second = arrays[j][arrays[j].size()-1];
                    ans = max(ans,abs(second-first));
                }
                
                
                
            }
        }
        return ans;
    }
};
