class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1) return chars.size();
        string ans="";
        int i=0;
        while(i<chars.size()){
            int j=i+1;
            int count=1;
            while(j<chars.size() && chars[i]==chars[j]) j++,count++;
            if(count==1){
                ans+=chars[i];
            }else {
                ans+=chars[i];
                string rev="";
                while(count>0){
                    rev+=count%10+'0';
                    count=count/10;
                }
              
                reverse(rev.begin(),rev.end());
                ans+=rev;
                
            }
            i=j;
        }
        for(int i=0;i<ans.length();i++){
            chars[i]=ans[i];
        }
        return ans.length();
    }
};
