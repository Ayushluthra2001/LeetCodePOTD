class Solution {
public:
    string removeStars(string s) {
        string ans="";
        int i=0;
        stack<char>st;
        while(i<s.length()){
            int j=i;
            while(j<s.length() && s[j]!='*'){
                st.push(s[j]);
                j++;
            }
            while(j<s.length() && s[j]=='*') {
                if(!st.empty()) st.pop();
                j++;
            }
            i=j;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
