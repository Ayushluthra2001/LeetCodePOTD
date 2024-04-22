class Solution {
public:
void Bfs(queue<string>&q,string &curr,unordered_set<string>&st){
    for(int i=0;i<4;i++){
        char ch=curr[i];
        char inc=ch=='9' ? '0':ch+1;
        char dec=ch=='0' ? '9' : ch-1;
        curr[i]=inc;
        if(st.find(curr)==st.end()){
            st.insert(curr);
            q.push(curr);
        }
        curr[i]=dec;
        if(st.find(curr)==st.end()){
            st.insert(curr);
            q.push(curr);
        }
        curr[i]=ch;
    }
}
    int openLock(vector<string>& deadends, string target) {
        string ans="0000";
        int level=0;
        
        unordered_set<string>st(begin(deadends),end(deadends));
        if(st.find(ans)!=st.end()) return -1;
        queue<string>q;
        q.push(ans);
       
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string curr=q.front();
                q.pop();
                if(curr==target) return level;

                Bfs(q,curr,st);
            }
            level++;
        }
        return -1;
    }
};
