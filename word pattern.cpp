class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i=0;
        int k=0;
        map<string,char>mapping;
        map<char,string>mapping2;
        while(i<pattern.length() && k<s.length()){
            char ch=pattern[i];
            int j=k;
            string temp="";
            while(j<s.length() && s[j]!=' '){
                temp+=s[j];
                j++;
            }
            cout<<ch<<" "<<temp<<endl;
            if(mapping.find(temp)==mapping.end() && mapping2.find(ch)==mapping2.end()){
                mapping[temp]=ch;
                mapping2[ch]=temp;
            }else{
                if(mapping[temp]!=ch || mapping2[ch]!=temp) return false;
            }
            i++;
            k=j+1;
        }
        if(i<pattern.length() || k<s.length()) return false;
        return true;
    }
};
