class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>push;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            push.push(pushed[i]);
            while(!push.empty() && push.top()==popped[j]){
                push.pop();
                j++;
            }
        }   
        return j==popped.size() ? 1 : 0;
        
    }
};
