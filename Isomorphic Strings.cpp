class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>map1,map2;
        for(auto i : s){
            map1[i]++;
        }
        for(auto i : t){
            map2[i]++;
        }
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
                if(t[i-1]!=t[i]) return false;
                if(map1[s[i-1]]!=map2[t[i-1]]) return false;
                else map1[s[i-1]]--,map2[t[i-1]]--;
            }else if(s[i-1]!=s[i]){
                if(t[i]==t[i-1]) return false;
                if(map1[s[i]]!=map2[t[i]]) return false;
                else{
                    map1[s[i]]-=2;
                    map2[t[i]]-=2;
                }
            }
        }
        return true;
    }
};
