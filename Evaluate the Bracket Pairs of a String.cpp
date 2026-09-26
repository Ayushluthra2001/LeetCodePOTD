class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mapping;
        string result = "";
        for(auto i : knowledge){
            //cout<<i[0]<<" "<<i[1]<<endl<<endl;
            mapping[i[0]] = i[1];
        }
        for(int i =0; i<s.length(); i++){
            //cout<<"a"<<endl;
            if(s[i]!='(' && s[i]!=')'){
                //cout<<"b"<<endl;
                result+=s[i];
            }else{
                //cout<<"c"<<endl;
                string temp = "";
                int j = 0;
                for (j = i + 1; j < s.length() && s[j] != ')'; j++) {
                    temp+=s[j];
                }
                i = j;
               // cout<<mapping[temp]<<endl;
               if(mapping.find(temp) != mapping.end() ) result+=mapping[temp];
               else result+='?';
            }
        }


        return result;
    }
};
