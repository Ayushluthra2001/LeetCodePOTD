class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>temp(score.begin(),score.end());
        sort(score.begin(),score.end());
        vector<string>ans;
        
        
        bool first=false,second=false,third=false;
        unordered_map<int,string>mapping;
        int k=4;
        for(int i=score.size()-1;i>=0;i--){
            if(!first){
               mapping[score[i]]="Gold Medal";
                first=true;
            }else if(!second){
                 mapping[score[i]]="Silver Medal";
                
                second=true;
            }else if(!third){
                mapping[score[i]]="Bronze Medal";
                third=true;
            }else{
                mapping[score[i]]=to_string(k++);
            }
        }
       
        for(int i=0;i<temp.size();i++){
            ans.push_back(mapping[temp[i]]);
        }
        return ans;
    }
};
