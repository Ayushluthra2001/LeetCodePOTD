class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        

        vector<vector<int>>direction{{0,1} , {1,0} , {0,-1} , {-1,0}};

        int steps = 0;
        vector<vector<int>>ans;

        int dir = 0;

        ans.push_back({rStart,cStart});

        while(ans.size() < rows * cols){
            if(dir == 0 || dir ==2) // east or west 
            steps++;

            for(int i= 0;i<steps;i++){
                rStart += direction[dir][0];
                cStart  += direction[dir][1];

                if( rStart >=0 && rStart<rows && cStart >=0 && cStart<cols){
                    ans.push_back({rStart, cStart});

                }
               
            }
             dir = (dir+1) % 4;
        }
        

        return ans;
    }
};
