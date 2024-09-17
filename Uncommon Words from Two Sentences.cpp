class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mapping;
        vector<string>ans;

        int i = 0;
        while( i < s1.length()){
            int j = i;
            string temp = "";
            while(j < s1.length() && s1[j] !=' '){
                temp+=s1[j++];
            }
            i = j+1;
            mapping[temp]++;
           
        }
        i = 0;
        while( i < s2.length()){
            int j = i;
            string temp = "";
            while(j < s2.length() && s2[j] !=' '){
                temp+=s2[j++];
            }
            i = j+1;
            
            mapping[temp]++;

        }
        for(auto i : mapping) if(i.second==1)ans.push_back(i.first);
        

        return ans;
    }
};
