class Solution {
public:
    bool check(int i , int j, vector<vector<int>>&grid){
       
        int firstRow = 0;
        int a;
        for(a = 0;a<3;a++){
            
            firstRow += grid[i][j+a];
        }
        int secondRow = 0;
        for(a = 0;a<3;a++){
            secondRow += grid[i+1][j+a];
        }
        int thirdRow = 0;
        for(a = 0;a<3;a++){
            thirdRow += grid[i+2][j+a];
        }
        if(firstRow != 15 || secondRow != thirdRow ) return false;

        int col1 = 0;
        int col2 = 0;
        int col3 = 0;

        for(a = 0;a<3;a++){
            col1 += grid[i+a][j];
        }
        for(a = 0;a<3;a++){
            col2 += grid[i+a][j+1];
        }
        for(a = 0;a<3;a++){
            col3 += grid[i+a][j+2];
        }
        if(col1 != 15 || col1 != col3 || col2 != 15 ) return false;

        int diagnol1 = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
        int diagnol2 = grid[i+2][j] + grid[i+1][j+1] + grid[i][j+2];
        if(diagnol1 != diagnol2) return false;
        if(col1 != diagnol1 || diagnol1 != firstRow) return false;
        if(col1 != 15) return false;

        //cout<<i<<" "<<j<<" "<<firstRow<<" "<<secondRow<<" "<<thirdRow<<" "<<col1<<" "<<col2<<" "<<col3<<" "<<diagnol1<<" "<<diagnol2<<endl;
        return true;

    }
    bool check2(int i , int j , vector<vector<int>>&grid){
        unordered_map<int,int>mapping;
        for(int a = i;a<i+3;a++){
            for(int b=j;b<j+3;b++){
                if(grid[a][b] > 9 || grid[a][b] == 0) return false;
                if(mapping.find(grid[a][b]) != mapping.end()) return false;
                //cout<<grid[a][b]<<" ";
                mapping[grid[a][b]]++;
            }
            //cout<<endl;
        }
        //cout<<i<<" "<<j<<" inside"<<endl;
        return true;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        //cout<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               // cout<<i<<" "<<i+3<<" "<<j<<" "<<j+3<<endl;
               // cout<<check(i,j,grid)<<endl;
                if(i+2 <n && j+2<m && check(i,j,grid) && check2(i,j,grid)) {
                   count++;
                }
            }
        }

        return count ;
    }
};
