class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mapping;
        for(auto i : target) mapping[i]++;
        for(int i=0;i<arr.size();i++){
            if(mapping[arr[i]]>=1) {
                mapping[arr[i]]--;
            }else return false;
        }
        return true;
    }
};
