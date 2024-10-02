class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans=arr;

        unordered_map<int,int>mapping;
        for(auto i : arr) mapping[i]++;

        vector<int>temp; 
        for(auto i : mapping) temp.push_back(i.first);
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mapping2;
        for(int i = 0;i<temp.size();i++){
            mapping2[temp[i]]  = i+1;

        } 

        for(int i = 0;i<ans.size();i++){
                ans[i] = mapping2[ans[i]];
        }

        

        return ans;
    }
};
