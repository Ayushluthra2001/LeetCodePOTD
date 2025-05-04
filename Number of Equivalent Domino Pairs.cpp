class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count = 0;
        for(int i =0; i<dominoes.size();i++){
            for(int j = i+1; j<dominoes.size();j++){
                int a = dominoes[i][0];
                int b = dominoes[i][1];
                int c = dominoes[j][0];
                int d = dominoes[j][1];
                if((a ==c && b == d)  || (a == d && b == c)){
                    count++;
                }
            }
        }
        return count;
    }
};
