class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
      vector<vector<int>>ans(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){

                int maxi=0;
                int c=0;
                
              // finding max element in curr 3 * 3 matrix 
                for(int k=i;k<n && c<3;k++,c++){
                    int d=0;
                    for(int b=j;b<n && d<3;b++,d++){
                        cout<<grid[k][b]<<" ";
                        maxi=max(maxi,grid[k][b]);
                    }
                   
                }
                
                ans[i][j]=maxi;
            }
        }
      return ans;  
    }
};
