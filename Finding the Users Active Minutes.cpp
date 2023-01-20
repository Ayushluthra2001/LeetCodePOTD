class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>ans(k,0);
        map<int,set<int>>mapping;
        for(int i=0;i<logs.size();i++){
            mapping[logs[i][0]].insert(logs[i][1]);
        }    
       
        for(auto i : mapping){
            if(i.second.size()<=k){
                ans[i.second.size()-1]++;
            }
        }
        return ans;
    }
};
