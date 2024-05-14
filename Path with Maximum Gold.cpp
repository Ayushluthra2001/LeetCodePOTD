class Solution {
public:
    bool check(vector<vector<int>>& grid,int currRow, int currCol){
        

       
        if(currRow>=grid.size() || currRow<0 || currCol>=grid[0].size() || currCol<0 || grid[currRow][currCol]==0) return true;
        return false;
    }
    int solve(vector<vector<int>>& grid, int currRow, int currCol){
         
        if(check(grid,currRow,currCol)) return 0;
       
        int maxi=0;
        int currValue=grid[currRow][currCol];
        grid[currRow][currCol]=0;
        maxi=max(maxi,solve(grid,currRow+1,currCol));
        maxi=max(maxi,solve(grid,currRow-1,currCol));
        maxi=max(maxi,solve(grid,currRow,currCol+1));
        maxi=max(maxi,solve(grid,currRow,currCol-1));
        grid[currRow][currCol]=currValue;
        return currValue+maxi;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
       
        

        int maxi=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0;j<grid[0].size(); j++){
                if(grid[i][j]!=0){
                    //cout<<grid[i][j]<<endl;
                     
                    maxi=max(maxi,solve(grid,i,j));
                }
            }
        }
        return maxi;
    }
};
