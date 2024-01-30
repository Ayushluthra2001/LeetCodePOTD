class Solution {
public:
int solve(string ch , int first , int second){
    if(ch=="+") return first+second;
    if(ch=="-") return second-first;
    if(ch=="*") return first*second;
    return second/first;

}
    int evalRPN(vector<string>& tokens) {
        int i=0;
        stack<int>s;
        for(auto i : tokens){
            string temp=i;
            if(temp[0]=='-' && temp.size()>=2) s.push(stoi(temp));
            else if(temp[0]!='+' && temp[0]!='-' && temp[0]!='/' && temp[0]!='*'){
                
                int x=stoi(temp);
                s.push(x);
                //cout<<x<<endl;
            }
            
            else {
                if(!s.empty() && s.size()>=2){
                    int first=s.top();
                    s.pop();
                    int second=s.top();
                    s.pop();
                     string op=i;
                     int ans=solve(op,first,second);
                     s.push(ans);
                }
            }
        }
        
        return s.top();
    }
};
