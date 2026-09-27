class Solution {
public:
    string reverseParentheses(string s) {
        string result = "";
        stack<char>st;
        int i = 0, j = 0;
        while(i<s.length()){
            if(s[i]!=')'){
                st.push(s[i]);
            }else{
                j = 0;
                string temp ="";
                while(!st.empty() && st.top() !='('){
                    temp+=st.top();
                    st.pop();
                }
                cout<<temp<<endl;
                cout<<st.top()<<endl;
                st.pop(); // to remove opening currly braces
                if(st.empty()) cout<<"Yes"<<endl;
                cout<<temp<<" "<<j<<" "<<temp.length()<<endl;
                while(j <temp.length()) {
                    st.push(temp[j]);
                  
                    j++;
                    
                }
                cout<<endl;
            
            }
            i++;
        }

        while(!st.empty()){
            result = st.top() + result;
            st.pop();
        }
        return result;
    }
};
