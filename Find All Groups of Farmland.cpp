class Solution {
public:
    void solve(vector<vector<int>>&land, vector<vector<int>>&visited,int i , int j,int &btr,int &btc){
        if(i>=visited.size() || i<0 || j>=land[0].size() || j<0 || visited[i][j]==1 || land[i][j]==0) return ;
        btr=max(btr,i);
        btc=max(btc,j);
        visited[i][j]=1;
        solve(land,visited,i+1,j,btr,btc);
solve(land,visited,i-1,j,btr,btc);
solve(land,visited,i,j-1,btr,btc);
solve(land,visited,i,j+1,btr,btc);


    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        vector<vector<int>>visited(land.size(),vector<int>(land[0].size(),0));
        for(int i=0;i<land.size();i++){
            for(int j=0;j<land[0].size();j++){
                if(land[i][j]==1 && visited[i][j]!=1){
                    int tpl=i;
                    int tpc=j;
                    int btr=i;
                    int btc=j;
                    
                    solve(land,visited,i,j,btr,btc);
                    ans.push_back({tpl,tpc,btr,btc});
                }
            }
        }
        return ans;   
    }
};
