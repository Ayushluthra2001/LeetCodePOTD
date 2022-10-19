class Solution {
public:
    
    static bool cmp(pair<string,int>p1,pair<string,int>p2){
        return (p1.second>p2.second ||( p1.second==p2.second && p1.first<p2.first));
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto x:words){
            mp[x]++;
        }
         vector<pair<string,int>>v;
        for(auto [x,y]:mp){
            v.push_back({x,y});
        }
        sort(v.begin(),v.end(),cmp);
        
        vector<string> ans;
        for(int i=0; i<k; i++)
        {
            ans.push_back(v[i].first);
        }
        
        return ans;
    }
};
