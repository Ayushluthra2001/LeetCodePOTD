class Solution {
public:
    int countUnguarded(int n, int m, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int count = 0;
        
        vector<vector<int>>matrix(n, vector<int>(m,0));
        
        for(int i = 0; i<walls.size(); i++){
            int row = walls[i][0];
            int col = walls[i][1];
            matrix[row][col] = -2;
        }

        for(int i = 0; i<guards.size(); i++){
            int row = guards[i][0];
            int col = guards[i][1];

            matrix[row][col] = -1;
            
            // up 
            for(int j = row-1; j>=0; j--) {
                if(matrix[j][col] != -2){
                    matrix[j][col] = -1;
                }else{
                    break;
                }
            }
            // down 
            for(int j = row+1; j<n; j++){
                if(matrix[j][col] != -2){
                    matrix[j][col] = -1;
                }else break;
            }

            // right 
            for(int j = col+1; j<m; j++){
                if(matrix[row][j] != -2){
                    matrix[row][j] = -1;
                }else break;
            }

            // left 
            for(int j = col-1; j>=0; j--){
                if(matrix[row][j] != -2){
                    matrix[row][j] = -1;

                }else break;
            }

        }
        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                 if(matrix[i][j] ==0) count++;   
            }
        }
        // for(int i = 0; i<n; i++){
        //     for(int j =0; j<m; j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return count;
    }
};
