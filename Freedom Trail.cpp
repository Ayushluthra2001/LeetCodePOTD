class Solution {
public:
    int findRotateSteps(string ring, string key) {
        int size = ring.size();
        int ksize = key.size();
        unordered_map<char,vector<int>> mp;//stored index of each characters in ring,pay attention to duplcate characters.
        for(int i=0;i<size;++i){
            mp[ring[i]].push_back(i);
        }
        
        vector<vector<int>> dp(ksize+1,vector<int> (size,INT_MAX));// initializing dp vector 
        fill(dp[0].begin(),dp[0].end(),0);
        
        vector<int> tmp(1,0);// starting index
        
        int res = INT_MAX;
        for(int i=1;i<=ksize;++i){
            for(auto it:mp[key[i-1]]){  //
                for(int j=0;j<tmp.size();++j){  //Search The shortest distance key[i-1] in ring
                    int minDist = min((tmp[j] + size -it)%size,(it + size - tmp[j])%size) + dp[i-1][tmp[j]];// Look at the above explanation
                    dp[i][it] =min(dp[i][it],minDist);
                    res = (i!=ksize?res:min(res,dp[i][it])); //Can we optimize it?
                }
            }
            tmp = mp[key[i-1]]; //next start is the characters we search in this time
        }
        return res + ksize;
    }
};
