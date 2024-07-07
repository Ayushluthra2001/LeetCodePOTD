class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = 0;
         int curr = numBottles;
         while(curr>=1){
            if(curr>=numExchange){
                curr-=numExchange;
                total+=numExchange;
                curr+=1;
            }else{
                total+=curr;
                curr=0;
            }

         }
         return total;
        
    }

};
