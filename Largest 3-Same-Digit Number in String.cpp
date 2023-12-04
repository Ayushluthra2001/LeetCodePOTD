class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=-1;
        string ans="";
        int i=0;
        while(i<num.length()){
            int j=i+1;
            int k=0;
            string  temp="";
           // cout<<temp<<endl;
            temp+=num[i];
            //cout<<temp<<endl;
            //cout<<num[i]<<endl;
            while(j<num.length() && k<2 && num[i]==num[j]){
                
                temp+=num[j];
                j++;
                k++;
            }
           // cout<<k<<" "<<j<<"  "<<i<<endl;
            int b=temp==" "? -1 : stoi(temp);
            //cout<<i<<" "<<temp<<endl;
            if(b>maxi && k==2){
                maxi=b;
                ans=temp;
            }
            i=j;
        }
        if(maxi==-1)
        return "";
        return ans;

    }
};
