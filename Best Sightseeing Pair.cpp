class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi = 0;
        int currMaxi =0;
        currMaxi = values[0];
        for(int i =1;i<values.size();i++){
            maxi = max(maxi ,currMaxi+values[i]-i);
            currMaxi = max(currMaxi,i+values[i]);
        }



        return maxi;
    }
};
