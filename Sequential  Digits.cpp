class Solution {
public:
bool solve(int n){
    int lastDigit = -1;
    while(n > 0){
        if(lastDigit == -1){
            lastDigit = n %10;
        }else{
            if(lastDigit-1 != n%10) return false;
        }
        lastDigit = n%10;
        n = n/10;
        
    }
    return true;
}
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        queue<long long>q;
        for(int i =1; i<=9; i++){
            q.push(i);
        }
        
        while(!q.empty()){

            int front = q.front();
            if(front >high) {
                q.pop();
                continue;
            }
            if(front >=low && front <=high){
                if(solve(front))ans.push_back(front);
            }
            q.pop();
            int lastDigit = front%10;
             long long newNo = (long long)front*10 + lastDigit+1;
            cout<<front<<" "<<lastDigit<<endl;
            q.push(newNo);
        }

        return ans;
    }
};
