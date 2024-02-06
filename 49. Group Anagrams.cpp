class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<vector<int>,vector<string>>mapping;
        for(int i=0;i<strs.size();i++){
            vector<int>freq(26,0);
            for(int j=0;j<strs[i].length();j++){
                freq[strs[i][j]-'a']++;
            }
            string t= strs[i];
            cout<<t<<endl;
            mapping[freq].push_back(t);
    
                
            }
        for(auto i : mapping){
            vector<string>temp;
            for(auto j : i.second){
                temp.push_back(j);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
