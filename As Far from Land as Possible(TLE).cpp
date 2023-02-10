class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int maxi=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0){
                    int count=INT_MAX;
                    for(int k=0;k<grid.size();k++){
                        for(int l=0;l<grid[i].size();l++){
                            if(l==j && k==i){
                                continue;
                            }else{
                                if(grid[k][l]==1){
                                    count=min(count,abs(i-k)+abs(j-l));
                                }
                            }
                        }
                    }
                    maxi=max(maxi,count);
                }
            }
        }
        
        if(maxi==INT_MIN) return -1;
        if(maxi==INT_MAX) return -1;
        return maxi;
    }
};
