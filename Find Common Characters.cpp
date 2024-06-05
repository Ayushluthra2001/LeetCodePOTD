class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>min_freq(26,INT_MAX);
        for(int i=0;i<words.size();i++){
            vector<int>freq(26,0);
            for(int j=0;j<words[i].length();j++){
                freq[words[i][j]-'a']++;
            }
            for(int j=0;j<26;j++){
                min_freq[j]=min(min_freq[j],freq[j]);
            }
        }
        vector<string>common_char;
        for(int i=0;i<26;i++){
        
            while(min_freq[i]>0){
                
                
                
                common_char.push_back(string(1,i+'a'));
                min_freq[i]--;
            }   
        }
        return common_char;
    }
};
