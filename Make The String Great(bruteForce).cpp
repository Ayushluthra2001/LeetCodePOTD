class Solution {
public:
    string makeGood(string s) {
        string ans="";
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty() || (abs(st.top()-s[i])!=32)) st.push(s[i]); 
            else if(abs(st.top()-s[i])==32) st.pop();
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
