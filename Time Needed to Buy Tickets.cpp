class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        int i=0;
        while(tickets[k]>0){
            i= i>=tickets.size() ? 0 : i;
            if(tickets[i]>0) {
                tickets[i]-=1;
                count++;
            }
            i++;
        }   
         return count;
    }
};
