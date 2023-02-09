class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_map<string ,int>mapping;
        unordered_map<char ,vector<string>>mapping2;
        for(auto i : ideas){
            mapping[i]++;
            mapping2[i[0]].push_back(i);
        }
        int count=0;
        // for(auto i : mapping){
        //     cout<<i.first<<" "<<i.second<<endl;

        // }
        // cout<<endl;
        // for(auto i : mapping2){
        //     cout<<i.first<<" ";
        //     for(auto j : i.second){
        //         cout<<j<<" ";

        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        for(int k=0;k<ideas.size();k++){
            string temp1=ideas[k];
            for(auto i : mapping2){
                if(i.first!=temp1[0]){

                
                // cout<<temp1<<" "<<i.first<<endl;
                char t = temp1[0];
                char t2=i.first;
                for(auto j : i.second){
                    // cout<<j<<" ";
                    string temp2=j;
                    temp1[0]=t2;
                    temp2[0]=t;
                    if(mapping[temp1]==0 && mapping[temp2]==0) count++;
                    temp1[0]=t;
                    temp2[0]=t2;
                    

                }
                // cout<<endl;
                }
            }

        }
        // cout<<endl;
        return count;
    }
};
