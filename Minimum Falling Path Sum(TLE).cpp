class Solution {
public:
    int solve(int currRow,int currCol,vector<vector<int>>&matrix){
        
        int first,second,third;
        bool flag=false;
        int ans=INT_MAX;
        if(currRow+1<matrix.size() && currCol-1>=0){
            first=solve(currRow+1,currCol-1,matrix);
            flag=true;
        }
        if(flag){
            ans=min(ans,first);
            flag=false;
        }
       if(currRow+1<matrix.size() && currCol>=0){
           second=solve(currRow+1,currCol,matrix);
           flag=true;
       }
       if(flag){
            ans=min(ans,second);
            flag=false;
        }
       
         
        if(currRow+1<matrix.size() && currCol+1<matrix[0].size()){
            third=solve(currRow+1,currCol+1,matrix);
            flag=true;
        }
        
        if(flag){
            ans=min(ans,third);
            flag=false;
        }
        if(ans==INT_MAX)ans=0;
        
        
       
        return matrix[currRow][currCol]+ans;

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int mini=INT_MAX;
        for(int i=0;i<matrix.size();i++){
           int x=solve(0,i,matrix);
          // cout<<x<<endl;
            mini=min(mini,x);
        }
        return mini;
    }
};
