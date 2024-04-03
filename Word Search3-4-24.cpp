class Solution {
public:
bool solve(vector<vector<char>>&board,string word , int i , int j, int k){
    if(k>=word.length()) return true;
    if(i>=board.size() || i<0 || j>=board[0].size() || j<0 || board[i][j]=='*' || word[k]!=board[i][j]) return false;
    
   char ch= board[i][j];
   board[i][j]='*';
   bool flag=false;
   flag=(flag || solve(board,word,i+1,j,k+1));
flag=(flag || solve(board,word,i,j+1,k+1));
   flag=(flag || solve(board,word,i-1,j,k+1));
flag=(flag || solve(board,word,i,j+1,k+1));

board[i][j]=ch;
return flag;

}
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(word[0]==board[i][j]){
                    
                    if(solve(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};
