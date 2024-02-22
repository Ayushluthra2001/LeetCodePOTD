class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int,int>in,out;
        for(auto i : trust){
            in[i[0]]++;
            out[i[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(in.find(i)==in.end() && out.find(i)!=out.end()){
                if(out[i]==n-1) return i;
            }
        }
        return -1;
        
        


    }
};
