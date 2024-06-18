class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int m=difficulty.size();
        int n=profit.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({profit[i],difficulty[i]});
        }
        sort(worker.begin(),worker.end(),greater<int>());
        int i=0;
        int total=0;
        while(i<worker.size() && !pq.empty()){
          
            if(!pq.empty() && pq.top().second>worker[i]) pq.pop();
            else total+=pq.top().first,i++;
    
        }
        return total;
    }
};
