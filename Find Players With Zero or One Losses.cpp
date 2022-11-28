class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        map<int,int>maping;
        for(int i=0;i<matches.size();i++){
            int first=matches[i][0];
            int second=matches[i][1];
            // cout<<"first "<<first<<" "<<"second "<<second<<endl;
            if(maping.find(first)==maping.end()){
                maping[first]=0;
            }
            if(maping.find(second)!=maping.end()){
                maping[second]++;
            }else{
                maping[second]=1;
            }
        }
        vector<int>temp1;
        vector<int>temp2;
        for(auto i : maping){
            
            if(i.second==0){
                temp1.push_back(i.first);
            }
            if(i.second==1){
                temp2.push_back(i.first);
            }
        }
        // for(auto i :  maping){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
};



