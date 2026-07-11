class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       
       map<int,int>mapping;
       unordered_map<int,vector<int>>sameRank;
       for(int i = 0; i<arr.size(); i++){
        mapping[arr[i]]++;
        sameRank[arr[i]].push_back(i);
       }    
        int count = 1;
       for(auto i : mapping){
        int element = i.first;
            for(auto j : sameRank[i.first]){
                arr[j] = count;
            }
            count++;
       }

       return arr;
    }
};
