class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mapping;
        for(auto i : arr1) mapping[i]++;
        vector<int>ans;
         vector<int>temp;
        for(int i=0;i<arr2.size();i++){
            if(mapping.find(arr2[i])!=mapping.end()){
                for(int j=0;j<mapping[arr2[i]];j++){
                    ans.push_back(arr2[i]);
                }
            }else temp.push_back(arr2[i]);
        }
       
        
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
           
                ans.push_back(temp[i]);
            
        }
        return ans;
    }
};
