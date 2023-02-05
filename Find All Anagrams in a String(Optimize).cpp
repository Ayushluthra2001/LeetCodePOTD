class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        unordered_map<char,int>mapping;
        for(auto i : p){
            mapping[i]++;
        }
        string str=s.substr(0,p.length());
         unordered_map<char ,int>temp;
         bool check=true;
         for(auto i : str){
                temp[i]++;
        }
        for(auto i : p){
                if(mapping[i]!=temp[i]) {
                    check=false;
                    break;
                }
        }
        if(check) ans.push_back(0);
        for(int i=p.length();i<s.length();i++){
            temp[s[i-p.length()]]--;
            temp[s[i]]++;
            check=true;
            for(auto i : mapping){
                if(i.second!=temp[i.first]) {
                    check=false;
                    break;
                }
            }
            if(check) ans.push_back(i-p.length()+1);
        }
        return ans;
    }
};

