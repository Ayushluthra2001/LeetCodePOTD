class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mapping;
        for(auto i  : s){
            mapping[i]++;
        }
        map<int,vector<char>>mapping2;
        for(auto i : mapping){
          //  cout<<i.first<< " "<<i.second<<endl;
            mapping2[i.second].push_back(i.first);

        }
        string ans="";
        for(auto i : mapping2){
            //cout<<i.first<<" "<<i.second<<endl;
            int b=0;
           for(int j=0;j<i.second.size();j++){
               for(int k=0;k<i.first;k++){
                   ans+=i.second[b];
               }
               b++;
           }
           
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
