class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        int ans=-1;
        vector<int>indegree(n,0);
        for(int i=0;i<edges.size();i++){
            indegree[edges[i][1]]+=1;
        }
        int mini=INT_MAX;
        int index=-1;
        for(int i=0;i<indegree.size();i++){
           if(indegree[i]<mini){
            mini=indegree[i];
            index=i;
           }
        }
        
        int count=0;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==mini) count++;
        }
        if(count>=2) return -1;

        return index;

    }
    
};
