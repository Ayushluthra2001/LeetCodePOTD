class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        unordered_map<char,int>mapping;
        for(auto i : p){
            mapping[i]++;
        }
        for(int i=0;i<s.length();i++){
            string str=s.substr(i,p.length());
           
            unordered_map<char ,int>temp;
            for(auto i : str){
                temp[i]++;
            }
            bool check=true;
            for(auto i : p){
                if(mapping[i]!=temp[i]) {
                    check=false;
                    break;
                }
            }
            if(check) ans.push_back(i);
        }
        return ans;
    }
};
