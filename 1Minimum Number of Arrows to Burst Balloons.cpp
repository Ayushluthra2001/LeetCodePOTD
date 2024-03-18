class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& point) {
        sort(point.begin(),point.end());
        reverse(point.begin(),point.end());
        // for(auto i : point){
        //     for(auto j : i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        int i=0;
        int count=1;
        // cout<<point.size()<<endl;
        while(i<point.size()){
            if(i+1==point.size()) return count;
            int j=i+1;
            
            while(j<point.size() && point[i][0]<=point[j][1]) j++;
            
            
            if(j==point.size()) {return count;}
           
            count++;
            i=j;
        }
        return count;
    }
};
