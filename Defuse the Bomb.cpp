class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        if(k<0){
           k*=-1;
        for(int i = 0; i<n;i++){
            
            int left  = 0;
            
            int j = (i-1+n)%n;
            int count = 0;
            while(count  < k){
                left+=code[j];
                count++;
                //cout<<code[j]<<" ";
                j= (j-1+n)%n;
                

            }
            cout<<endl;
           // cout<<left<<" ";
            ans[i] = left;
            
        }

            return ans;
        }
        
        for(int i = 0; i<n;i++){
            
            int right = 0;
            int j = (i+1)%n;
            int count = 0;
            
            
            count = 0;
            while(count < k){
                right += code[j];
                count++;
                j = (j+1)%n;

            }
            ans[i] = right;

        }

        return ans;



    }
};
