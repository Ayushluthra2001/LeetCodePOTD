class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mapping,mapping2;
        for(auto i : s ){
            mapping[i]++;
        }
        for(auto i : t){
            mapping2[i]++;
        }
        int ans=0;
        for(auto i : mapping){
            if(mapping2.find(i.first)==mapping2.end()){
                ans+=i.second;
            }else {
                //cout<<i.first<<endl;
                if(mapping[i.first]>mapping2[i.first]){
                    ans+=abs(i.second-mapping2[i.first]);
                }
            }
        }
        return ans;
    }
};
