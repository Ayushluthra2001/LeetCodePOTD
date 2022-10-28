class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mapping;
        string temp;
        for(int i=0;i<strs.size();i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mapping[strs[i]].push_back(temp);
        }
        vector<vector<string>>ans;
        for(auto it : mapping){
            ans.push_back(it.second);
        }
        return ans;
    }
};
