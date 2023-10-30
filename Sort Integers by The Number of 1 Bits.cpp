class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>>mapping;
        for(auto i : arr){
           
            int t=i;
            int count=0;
            while(i>0){
                if(i%2==1)count++;
                i=i/2;
            }
            mapping[count].push_back(t);
        }
        vector<int>ans;
        for(auto i : mapping){
    
            vector<int>temp2=i.second;
            sort(temp2.begin(),temp2.end());

          
             for(auto i : temp2){
                ans.push_back(i);

            }
            
            
        }
        
        
        return ans;
    }
};
