class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                sum+=customers[i];
                customers[i]=0;
            }
        }
        int cur=0;
        for(int i=0;i<minutes;i++){
           cur+=customers[i];
        }
        int ans=cur;
        for(int i=minutes;i<n;i++)
        {
            cur+=customers[i];
            cur-=customers[i-minutes];
            ans=max(ans,cur);            
        }
        return sum+ans;
    }
};
