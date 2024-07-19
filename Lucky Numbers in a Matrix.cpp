class Solution {
public:
    // checking is there any smaller element then our current element 
    bool checkCol(vector<vector<int>>& matrix, int x, int j){

        for(int i=0; i<matrix.size();i++){
           if(matrix[i][j] > x ) return false;
        }


        // no element found that is larger than current element
        return true;
    }

    // checking is there any larger element then our current element 
    bool checkRow(vector<int>& row, int x){
       
        for(int i=0;i<row.size();i++){
            if(x > row[i]) return false;
        }
       

       // no element found that is smaller than current element

        return true;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        vector<int>ans;
        

        // checking for every element present in  matrix 
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                int x = matrix[i][j];
                
                if(checkRow(matrix[i],x) && checkCol(matrix,x,j)) {
                    // we are able to find a element that is 
                    // smaller in its row and larger in its column
                    ans.push_back(x);
                }
            }
        }


        return ans;
    }
};
