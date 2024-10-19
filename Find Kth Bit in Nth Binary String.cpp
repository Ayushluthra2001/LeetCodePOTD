class Solution {
public:
string flip(string temp){

    for(int i = 0;i<temp.length();i++){
        if(temp[i]=='0')temp[i]='1';
        else temp[i] ='0';
    }
    return temp;
}
string getS(int n){
    if(n==1) return "0";
    if(n==2) return "011";
    if(n==3) return "0111001";

    string get = getS(n-1);
    string reversed =get ;
    reversed= flip(reversed);
    reverse(reversed.begin(),reversed.end());
    return get + "1" + reversed;
}
    char findKthBit(int n, int k) {
        string ans = getS(n);
        cout<<ans<<endl;
        return ans[k-1];
    }
};
