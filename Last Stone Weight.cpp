class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto i : stones){
            pq.push(i);
        }
        while(!pq.empty() && pq.size()>=2){
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();
            if(first==second){
                continue;
            }else{
                pq.push(abs(second-first));
            }
        }
        if(pq.empty()) return 0;
        return pq.top();
    }
};
