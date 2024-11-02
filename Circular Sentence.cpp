class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        vector<string>words;
        int i = 0;
        while(i < sentence.length()){
            int j = i;
            string temp ="";
            while(j < sentence.length() && sentence[j] != ' '){
               temp += sentence[j];
                j++;
            }
            words.push_back(temp);
           
            i = j+1;
        }
        string last = words[words.size()-1];
        if(words[0][0] != last[last.length()-1])return false;

        for(int i = 1;i<words.size(); i++){
            string x = words[i-1];
            if(x[x.length()-1] != words[i][0]) return false;
        }

        return true;

    }
};
