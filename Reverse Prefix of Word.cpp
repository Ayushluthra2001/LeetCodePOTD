class Solution {
public:
    string reversePrefix(string word, char ch) {
        int find=-1;
        for(int i=0;i<word.length();i++){
            if(ch==word[i]) {find=i;break;}  
        }

        if(find==-1) return word;
        int start=0,end=find;
        while(start<=end){
            swap(word[start],word[end]);
            start++,end--;
        }
        return word;
    }
};
