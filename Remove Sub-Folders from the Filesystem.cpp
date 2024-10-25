class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_map<string,int>mapping;
        sort(folder.begin(),folder.end());
        for(int i = 0; i<folder.size();i++){
            string path = folder[i];

            int j =1;
            string temp ="/";
            bool find = false;
            while(j < path.length() && !find){
                
                if(path[j]=='/'){
                    if(mapping.find(temp)!=mapping.end()){
                        find = true;
                    }
                }
                temp+=path[j++];
            }
            if(!find) mapping[path]++;
            
            
        }

        vector<string>result;

        for(auto i : mapping) result.push_back(i.first);

        return result;
    }
};
