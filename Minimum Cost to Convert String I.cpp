
class Solution {
public:


    void floyidWarshel(vector<vector<long long>>& adjMatrix,vector<char>& original, vector<char>& changed, vector<int>& cost ){

        for(int i=0;i<original.size();i++){
            char source = original[i];
            char target = changed[i];

            adjMatrix[source-'a'][target-'a'] = min(adjMatrix[source-'a'][target-'a'],(long long)cost[i]);


        
        }

        // floyd warshall algorithm
        for(int k=0; k<26; k++){
            for(int i=0; i<26; i++){
                for(int j=0; j<26; j++){
                    adjMatrix[i][j] =  min(adjMatrix[i][j],adjMatrix[i][k]  + adjMatrix[k][j]);
                }
            }
        }
    }
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        
        vector<vector<long long>>adjMatrix(26,vector<long long>(26,INT_MAX));


        floyidWarshel(adjMatrix, original , changed, cost);

        long long ans =0;

        for(int i=0;i<source.length();i++){
            if(source[i]  == target[i]){
                continue;
            }
            if(adjMatrix[source[i]-'a'][target[i]-'a'] == INT_MAX) return -1;

            ans += adjMatrix[source[i]-'a'][target[i]-'a'];
        }

        return ans;
    }
};
