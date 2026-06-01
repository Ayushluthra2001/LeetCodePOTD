class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int sum = 0;
        int x = 0;
        for(int i = 0; i<cost.size(); i++){
            if(x == 2) {
                x = 0;
            }else{
                x++;
                sum+=cost[i];
            }
        }

        return sum;
    }
};
