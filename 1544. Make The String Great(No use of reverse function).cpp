class Solution {
public:
    string makeGood(string s) {
        if(s.length()==1) return s;
        stack<char>st;
        string ans="";
        st.push(s[0]);
        int i=1;
        while(i<s.length()){
           if(!st.empty()){
                char top=st.top();
                char currChar=s[i];
                if(currChar==tolower(currChar)){
                    if(toupper(currChar)==top) st.pop();
                    else st.push(s[i]);
                }else{
                    if(tolower(currChar)==top) st.pop();
                    else st.push(s[i]);
                }
           }else st.push(s[i]);
           i++;
        }
       
       
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};
