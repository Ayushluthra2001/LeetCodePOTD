class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp1="",temp2="";

        for(int i=0;i<s.length();i++){
           temp1+=s[i];
           if(s[i]=='#'){
            if(temp1.size()>0)
               temp1.pop_back();
            if(temp1.size()>0)
               temp1.pop_back();
           }
            
        }
        for(int i=0;i<t.length();i++){
            temp2+=t[i];
            if(t[i]=='#'){
            if(temp2.size()>0)
               temp2.pop_back();
            if(temp2.size()>0)
               temp2.pop_back();
           }
            
        }
        //cout<<temp1<< " "<<temp2<<endl;
        return temp1==atemp2;
    }
};
