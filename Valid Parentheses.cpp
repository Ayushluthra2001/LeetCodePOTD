class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int close=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }else if(s[i]=='{'){
                st.push(s[i]);
            }else if(s[i]=='['){
                st.push(s[i]);
            }else if(s[i]==')'){
                if(st.empty()) return false;
                if(st.top()!='(') return false;
                else st.pop();
            }else if(s[i]==']'){
                if(st.empty()) return false;
                if(st.top() !='[') return false;
                else st.pop();
            }else if( s[i]=='}'){
                if(st.empty()) return false;
                if(st.top() !='{') return false;
                else st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
