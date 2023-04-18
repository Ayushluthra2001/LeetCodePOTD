class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        bool flag=true;
        string ans="";
        while(i<word1.length() && j<word2.length()){
            if(flag){
                ans+=word1[i];
                i++;
                flag=false;
            }else{
                ans+=word2[j];
                flag=true;
                j++;
            }
        }
        while(i<word1.length()){
            ans+=word1[i++];
        }
        while(j<word2.length()){
            ans+=word2[j++];
        }
        return ans;
    }
};
