class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>ans;
        
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi) ans.push_back(1);
            else ans.push_back(0);
        }       
        return ans;
    }
};
