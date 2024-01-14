class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        vector<int>freq(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<word1.length();i++){
            freq[word1[i]-'a']++;
        }
        for(int i=0;i<word1.length();i++){
            freq2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if((freq[i]==0 && freq2[i]!=0) || (freq[i]!=0 && freq2[i]==0) ) return false;
            
        }
        sort(freq.begin(),freq.end());
        sort(freq2.begin(),freq2.end());
        return freq==freq2;
    }
};
