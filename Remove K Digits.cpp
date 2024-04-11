class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()<=k) return "0";
        stack<char>st;
        for(int i=0;i<num.length();i++){
           
                while(k>0 && !st.empty() && st.top()-'0'>num[i]-'0'){
                    st.pop();
                    k--;
                
               
            }
                st.push(num[i]);
            
            if(st.size() == 1 && num[i] == '0')
                st.pop();
        }
       
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
       
       return ans;
       
    }
};
