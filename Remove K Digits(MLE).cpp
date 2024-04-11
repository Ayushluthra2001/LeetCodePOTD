class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(int i=0;i<num.length();i++){
            if(!st.empty()){
                while(k>0 && !st.empty() && st.top()-'0'>num[i]-'0'){
                    st.pop();
                    k--;
                }
                st.push(num[i]);
            }else{
                st.push(num[i]);
            }
        }
        string ans="";
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        string temp="";
        int i=0;
        while(i<ans.size() && ans[i]=='0'){
            i++;
        }
        while(i<ans.size() ){
            temp+=ans[i];
            i++;
        }
        if(temp.length()==0) return "0";
        return temp;
       
    }
};
