class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int i=0;
        int j=0;
        int n=deck.size();
        vector<int>ans(n,0);
        bool skip=false;
        while(i<n){
            if(ans[j]==0){
                if(!skip) {
                    skip=true;
                    ans[j]=deck[i];
                    i++;
                    j=(j+1)%n;
                }else{
                    j=(j+1)%n;
                    skip=!skip;
                }
            }else{
                j=(j+1)%n;
            }
            
        }
        return ans;
    }
};
// 2 3 5 7 11 13 17
// 2   
