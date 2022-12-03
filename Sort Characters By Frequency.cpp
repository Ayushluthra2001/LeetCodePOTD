class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mapping1;
        map<int,vector<char>>mapping2;
        string ans="";
        for(auto i : s){
            mapping1[i]++;
        }
        for(auto i : mapping1){
            mapping2[i.second].push_back(i.first);
        }
        for(auto i : mapping2){
            int k=i.first;
            for(auto j : i.second){
                for(int l=0;l<k;l++){
                    ans+=j;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
