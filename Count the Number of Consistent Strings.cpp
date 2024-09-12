class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        vector<int>freq1(26,0);
        for(int i = 0; i<allowed.length(); i++){
            freq1[allowed[i]-'a'] ++;
        }

        for(int i = 0; i < words.size();i++){
            bool flag = true;
            for(int j = 0;j<words[i].length();j++){
                if(freq1[words[i][j]-'a'] ==0 ) {
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }


        return count ;
    }
};
