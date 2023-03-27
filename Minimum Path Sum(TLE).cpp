class Solution {
public:
    int solve(int i ,int j, vector<vector<int>>& grid){
        if(i>=grid.size() || j>=grid[0].size()) return 100000000;
        if(i==grid.size()-1 && j==grid[0].size()-1)  return grid[i][j];
        
        int down=solve(i+1,j,grid);
        int right=solve(i,j+1,grid);
        
        return min(down+grid[i][j],right+grid[i][j]);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sum=0;
        sum=solve(0,0,grid);
        return sum;
    }
};
