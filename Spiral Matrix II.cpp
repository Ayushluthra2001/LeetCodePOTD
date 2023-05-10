class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startingrow=0;
        int startingcol=0;
        int endingrow=n-1;
        int endingcol=n-1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        int count=1;
        while(count<=n*n){
            for(int i=startingcol;i<=endingcol;i++){
                ans[startingrow][i]=count;
                count++;
            }
            startingrow++;
            for(int i=startingrow;i<=endingrow;i++){
                ans[i][endingcol]=count;
                count++;
            }
            endingcol--;
            for(int i=endingcol;i>=startingcol;i--){
                ans[endingrow][i]=count;
                count++;
            }
            endingrow--;
            for(int i=endingrow;i>=startingrow;i--){
                ans[i][startingcol]=count;
                count++;
            }
            startingcol++;
        }
        return ans;
    }
};
