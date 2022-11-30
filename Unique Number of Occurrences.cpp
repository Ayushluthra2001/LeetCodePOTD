class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mapping1;
        map<int,int>mapping2;
        for(auto i : arr){
            mapping1[i]++;
        }
        for(auto i : mapping1){
            if(mapping2[i.second]) return false;
            mapping2[i.second]++;
        }
    
        return true;
    }
};


