class Trie {
public:
    unordered_map<string,int>mapping;
    Trie() {
        
    }
    
    void insert(string word) {
        mapping[word]=2;
    }
    
    bool search(string word) {
        //  cout<<word<<" "<<mapping[word]<<endl;
        if(mapping.find(word)!=mapping.end() && mapping[word]==2) return true;
        // cout<<mapping[word]<<endl;
        return false;
    }
    
    bool startsWith(string prefix) {
        if(mapping.find(prefix)!=mapping.end()) {
           
            // cout<<prefix<<" "<<mapping[prefix];
            // cout<<endl;
            //  cout<<"h"<<endl;
            if(mapping.count(prefix)==2) return true;
            else if(mapping.count(prefix)==0) return false;
            
            
            
        }
        cout<<prefix<<" "<<"u"<<endl;

        string temp=prefix;
        for(auto k : mapping){
            string temp2=k.first;
            int i=0,j=0;
            
            if(temp.length()<=temp2.length()){
                while(i<temp.length() && j<temp2.length()){
                    if(temp[i]==temp2[j]) i++,j++;
                    else break;
                 }
                 if(temp.length()<=temp2.length() && i==temp.length() && j==temp.length() ) {
                    //  cout<<temp2<<endl;
                     return true;
                 }  
            }
            
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
//  ["Trie","insert","search","search","search","startsWith","startsWith","startsWith"]
//  [[],["hello"],["hell"],["helloa"],["hello"],["hell"],["helloa"],["hello"]]
//  n n f f t t
//  hello 

