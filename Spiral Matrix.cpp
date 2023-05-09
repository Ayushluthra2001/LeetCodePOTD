class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startingrow=0;
        int startingcol=0;
        int r=matrix.size();
        int c=matrix[0].size();
        int endingrow=r-1;
        int endingcol=c-1;
        int total=r*c;
        int counter=0;
        vector<int>spiralview;
        while(counter<total){
            for(int index=startingcol; counter<total && index<=endingcol;index++){
                spiralview.push_back(matrix[startingrow][index]);
                counter++;
            }
            startingrow++;
            
            for(int index=startingrow; counter<total && index<=endingrow;index++){
                spiralview.push_back(matrix[index][endingcol]);
                counter++;
            }
            endingcol--;
            for(int index=endingcol;counter<total && index>=startingcol;index--){
                spiralview.push_back(matrix[endingrow][index]);
                counter++;
            }
            endingrow--;
            for(int index=endingrow;counter<total && index>=startingrow;index--){
                spiralview.push_back(matrix[index][startingcol]);
                counter++;
            }
            startingcol++;
            
        }
        return spiralview;
    }
};
