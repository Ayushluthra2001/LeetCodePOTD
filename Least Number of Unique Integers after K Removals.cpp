class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mapping;
        for(auto i : arr){
            mapping[i]++;
        }
        
        // map<int,int>mapping2;
        // for(auto i : mapping){
        //    // cout<<i.first<<" "<<i.second<<endl;
        //     mapping2[i.second]=i.first;
        // }
        // int l=0;
        // // for(auto i : mapping2){
        // //     cout<<i.first<<" "<<i.second<<endl;
        // // }
        // for(auto i : mapping2){
        //     if(l<k){
        //         l++;
        //         mapping[i.second]--;
        //         if(mapping[i.second]==0){
        //             mapping.erase(i.second);
        //         }

        //     }else return mapping.size();

        // }
        // return mapping.size();
        vector<pair<int,int>>p;
        for(auto i : mapping){
            p.push_back({i.second,i.first});
        }
        sort(p.begin(),p.end());
        
        for(int i=0;i<p.size();i++){
            //cout<<i.first<<" "<<i.second<<endl;
           pair<int,int>pp=p[i];
           if(pp.first<=k){
               k-=pp.first;
               p[i].first=0;
               p[i].second=0;
           }else break;

        }
        //cout<<k<<endl;
        // for(auto i : p){
        //     cout<<i.first<<" "<<i.second<<endl;

        // }

int count=0;
for(auto i : p){
    if(i.second!=0 ){
        count++;
    }
}
        return count;
        
    }
};



