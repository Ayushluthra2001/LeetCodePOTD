class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int i=0,n=intervals.size();
        while(i<n && intervals[i][1]<newInterval[0]){ ans.push_back(intervals[i++]);
        }
            int first=newInterval[0];
            int second=newInterval[1];
    
            while(i<n && intervals[i][0]<=newInterval[1]){
                first=min(first,intervals[i][0]);
                second=max(second,intervals[i][1]);
                i++;

            }
        ans.push_back({first,second});
        while(i<n) ans.push_back(intervals[i++]);
        return ans;
    }
};
