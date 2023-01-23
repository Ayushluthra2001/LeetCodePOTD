class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int,vector<int>>mapping;
        vector<int>temp;
        for(int i=0;i<trust.size();i++){
            temp.push_back(trust[i][0]);
            mapping[trust[i][1]].push_back(trust[i][0]);
        }
        
        for(auto i : mapping){
            if(i.second.size()==n-1 && find(temp.begin(),temp.end(),i.first)==temp.end()) return i.first; 
        }
        return -1;

    }
};
