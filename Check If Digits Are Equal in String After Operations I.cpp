class Solution {
public:
    bool hasSameDigits(string s) {
        int i = 0;
        while(s.length()>=3){
            string temp="";
            for(int i =0; i<s.length()-1; i++){
                 temp+= ((s[i]-'0' + s[i+1]-'0')%10)+'0';


            }
            //cout<<temp<<endl;
            s = temp;
            if(temp.length()<=2) break;
           
            
        }
       // cout<<"s is"<<s<<endl;
        if(s[0]==s[1]) return true;
        return false;
    }
};
