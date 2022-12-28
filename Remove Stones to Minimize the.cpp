class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        while(!pq.empty()  && k>0){
            int val=pq.top();
            pq.pop();
          
            int  newEl=ceil((float)val/2);
            pq.push(newEl);
            
            k--;
        }
        int remainingStones=0;
        while(!pq.empty()){
            remainingStones+=pq.top();
            pq.pop();
        }
        return remainingStones;
    }
};

