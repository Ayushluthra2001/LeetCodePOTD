class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
     unordered_map<char,int>mapping;
     int k=0;
     for(auto i : order){
         mapping[i]=k++;
     }

        for(int i=0;i<words.size();i++){
            string s=words[i];
            for(int j=i+1;j<words.size();j++){
                string st=words[j];
                int mini=min(s.length() , st.length());
                int k=0;
                bool gotIt=false;
                while(k<mini && !gotIt){
                    if(mapping[s[k]]>mapping[st[k]]) {
                    
                        return false;
                    }else if(mapping[s[k]]<mapping[st[k]]){
                        gotIt=true;
                        break;

                    }
                    k++;
                }
                if(!gotIt && s.length()>st.length()) return false;

            }
        }
        return true;
    }
};
