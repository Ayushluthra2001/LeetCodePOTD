class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();


         for(int i=0;i<n;i++){
            if(grid[i][0]==0){
                for(int j=0;j<m;j++){
                    grid[i][j]=1-grid[i][j];
                }
            }
         }

         for(int j=1;j<m;j++){
            int countZero=0;
            for(int i=0;i<n;i++){
                if(grid[i][j]==0) countZero++;
            }
            if(countZero>n-countZero){
                for(int i=0;i<n;i++){
                    grid[i][j]=1-grid[i][j];
                }
            }
         }
         int score=0;

        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                int value=grid[i][j]*pow(2,m-j-1);
                score+=value;
            }
        }
         return score;
    }
};
