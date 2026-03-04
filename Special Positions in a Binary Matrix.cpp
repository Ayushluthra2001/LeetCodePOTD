class Solution {
public:
    bool check(vector<vector<int>>& mat, int x , int y){
        for(int i = x-1; i>=0; i--){
            if(mat[i][y] == 1) return false;
        }
        for(int i = x+1; i<mat.size(); i++){
            if(mat[i][y] == 1) return false;
        }
        for(int i = y-1; i>=0; i--) {
            if(mat[x][i]==1) return false;
        }
        for(int i=y+1; i<mat[0].size(); i++){
            if(mat[x][i] == 1) return false;
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){
                if(mat[i][j] == 1){
                    if(check(mat,i,j)) count++;
                }
            }
        }

        return count;
    }
};
