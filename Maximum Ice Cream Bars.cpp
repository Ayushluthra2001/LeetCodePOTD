class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        int i=0;
        while(coins>0 && i<costs.size()){
            if(coins-costs[i]>=0){
                coins-=costs[i];
                i++;
                count++;
            }else{
                return count;
            }
        }
        return count;
    }
};
