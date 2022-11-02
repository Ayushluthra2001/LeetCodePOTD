class Solution {
public:
    
    // utility function to find valid gene mutation
    bool is_valid_transform(string a, string b){
        int mutations = 0;  // count letter change
        for(int k = 0; k < 8; k++){
            if(a[k] != b[k]) mutations++;
            if(mutations > 1) break;
        }   
        // if there is only one letter change fine, else invalid
        return (mutations == 1 ? true: false);
    }
    
    int minMutation(string start, string end, vector<string>& bank) {
        
        // if starting gene and ending gene is same initially itself
        if(start == end) return 0;
        
        unordered_map<string, vector<string>> valid_transform;
        int n = bank.size();
        
        
        // Creating an directed Graph
        /* --- Adjacency list buliding starts ---*/
        // all valid mutations from starting gene
        for(int j = 0; j < n; j++){
            if(is_valid_transform(start, bank[j])) 
                valid_transform[start].push_back(bank[j]);   // directed         
        }
        
        // valid mutations from a bank gene to other bank gene
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(is_valid_transform(bank[i], bank[j])) 
                    valid_transform[bank[i]].push_back(bank[j]); // directed  
            }
        }
        /* --- Adjacency list buliding ends --- */
        
        
        
        // BFS 
        queue<string> q;
        q.push(start); // push starting gene
        
        int min_mutations = 1;
        while(!q.empty()){
            
            int count = q.size();
            while(count--){ // traverse this whole level
                string gene = q.front(); q.pop();
                
                // from this gene which genes can i mutate to
                for(string valid_gene: valid_transform[gene]){
                    if(valid_gene == end) return min_mutations; 
                    q.push(valid_gene);
                }
            }
            
            // move to the next level
            min_mutations++;
        }
        
        // Wasn't able find `end` gene in any level 
        return -1;
    }
};
