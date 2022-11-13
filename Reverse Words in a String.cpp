class Solution {
public:
    string reverseWords(string s) {
        vector<string>strings;
        string temp="";
        for(int i=0;i<s.length();i++){
            
            if(s[i]==' ')
                if(temp!="")
                    strings.push_back(temp),temp="";
            if(s[i]!=' ') temp+=s[i];
        }
        if(temp!="") strings.push_back(temp);
        string ans="";
        for(int i=strings.size()-1;i>=0;i--){
            
             ans+=strings[i];
            if(i!=0) ans+=' ';
        }
        return ans;
        
    }
};
