class Solution {
public:
    
    bool solve(int row,int col, int index,vector<vector<char>>&board,string word){
        if(index>=word.length()) return true;

        if(row<0 || row>=board.size() || col<0 || col>=board[0].size() || board[row][col]=='.' || word[index]!=board[row][col])  return false;
        
        if(word.size()==1 && word[index]==board[row][col]) return true;
        
        bool flag=false;
    
        board[row][col]='.'; // marking visited
        // 4 calls
            flag=(flag || solve(row+1,col,index+1,board,word));
            flag=(flag || solve(row,col+1,index+1,board,word));
            flag=(flag || solve(row-1,col,index+1,board,word));
            flag=(flag || solve(row,col-1,index+1,board,word));
        
        board[row][col]=word[index];  // backtracking 
        return flag;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        int index=0;
       
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]==word[0])
                    if(solve(i,j,index,board,word)) return true;
            }
        }
         
        return false;
    }
};
