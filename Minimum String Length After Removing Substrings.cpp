class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        int i = 0;
        while(i < s.length()){
            char curr = s[i];
            if(!st.empty()){

                char top = st.top();
                if(st.top()=='A' && curr== 'B'){
                    st.pop();
                }else if(st.top()=='C' && curr=='D'){
                    st.pop();
                }else st.push(curr);
            }else st.push(s[i]);
            i++;
        }


        string ans = "";
        while(!st.empty()){
            ans= ans + st.top();
            st.pop();
        }
        return ans.length();
    }
};
