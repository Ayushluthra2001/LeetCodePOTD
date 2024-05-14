class Solution {
public:
    bool check(vector<vector<int>>& grid,int currRow, int currCol, vector<vector<bool>> visited){
        

       
        if(currRow>=grid.size() || currRow<0 || currCol>=grid[0].size() || currCol<0 || visited[currRow][currCol]==true || grid[currRow][currCol]==0) return true;
        return false;
    }
    int solve(vector<vector<int>>& grid, int currRow, int currCol, vector<vector<bool>> visited){
         //cout<<"H"<<endl;
        if(check(grid,currRow,currCol,visited)) return 0;
       
        int maxi=0;
        visited[currRow][currCol]=true;
        maxi=max(maxi,grid[currRow][currCol]+solve(grid,currRow+1,currCol,visited));
        maxi=max(maxi,grid[currRow][currCol]+solve(grid,currRow-1,currCol,visited));
        maxi=max(maxi,grid[currRow][currCol]+solve(grid,currRow,currCol+1,visited));
        maxi=max(maxi,grid[currRow][currCol]+solve(grid,currRow,currCol-1,visited));
        //cout<<maxi<<endl;
        return maxi;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        vector<vector<bool>>visited(grid.size()+1,vector<bool>(grid[0].size()+1,0));
        int maxi=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0;j<grid[0].size(); j++){
                if(grid[i][j]!=0){
                    //cout<<grid[i][j]<<endl;
                    maxi=max(maxi,solve(grid,i,j,visited));
                }
            }
        }
        return maxi;
    }
};
