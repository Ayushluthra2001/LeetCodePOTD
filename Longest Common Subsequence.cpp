class Solution {
public:
    
    int longestCommonSubsequence(string text1, string text2) {
        int mini=min(text1.length(),text2.length());
        vector<int>curr(text2.length()+1,0);
        vector<int>next(text2.length()+1,0);
        for(int i=text1.length()-1;i>=0;i--){
            for(int j=text2.length()-1;j>=0;j--){
                int ans=0;
                if(text1[i]==text2[j]){
                    ans=1+next[j+1];
                }else{
                ans = max(next[j],curr[j+1]);

                }
                curr[j]=ans;
            }
            next=curr;
        }
        return next[0];
    }
};
