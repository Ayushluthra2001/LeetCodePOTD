class Solution {
public:
    bool check(string temp1 , string temp2){
        
        int i = 0 , j = 0;
        while(j < temp2.length() && i < temp1.length()){
            if(temp1[i] != temp2[j]) return false;
            i++,j++;

        }
        if(j==temp2.length() ) return true;
        return false;
    }
    int prefixCount(vector<string>& words, string pref) {
        int count  = 0;
        
        for(int i = 0; i<words.size();i++){
            if(words[i][0] == pref[0]){
                if(check(words[i], pref)) count++;
            }
        }


        return count;
    }
};
