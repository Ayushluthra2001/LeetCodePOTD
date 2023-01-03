class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        
        for(int i=0;i<strs[0].length();i++){
            int prev=strs[0][i]-'a';
            for(int j=1;j<strs.size();j++){
               
                if(prev<=strs[j][i]-'a'){
                    prev=strs[j][i]-'a';
                }else{
                   
                    count++;
                    break;
                }
            }
            
        }
        return count;
    }
};
