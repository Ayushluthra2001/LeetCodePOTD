class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>>ans;
        intervals.push_back({newInterval[0],newInterval[1]});
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            int currFirst=intervals[i][0];
            int currSecond=intervals[i][1];
            bool gotIt=false;
            for(int j=i+1;j<n;j++){
                if(currFirst>=intervals[j][1] || currSecond>=intervals[j][0]){
                    currSecond=intervals[j][1];
                    gotIt=true;
                }else{
                    break;
                }
            }
            if(gotIt){
                
                ans.push_back({currFirst,currSecond});
            }
            else{
                if(ans.size()>0 && (currFirst>=ans[ans.size()-1][1] || currSecond>=ans[ans.size()-1][0])){
                    continue;
                }else{
                        ans.push_back({currFirst,currSecond});
                }
               
            }
        }
        return ans;
    }
};
