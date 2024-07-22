class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mapping;
        for(int i=0 ;i<names.size();i++){
            mapping[heights[i]]  = names[i];
        }

        vector<string>ans(names.size(),"");
        int n = ans.size()-1;
        for(auto i : mapping) ans[n--]=i.second;
        

        return ans;
    }
};
