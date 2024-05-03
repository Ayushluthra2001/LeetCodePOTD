class Solution {
public:
vector<string>getToken(string version){
    stringstream ss(version);
    string token="";
    vector<string>tokens;
    while(getline(ss,token,'.')){
        tokens.push_back(token);
    }
    return tokens;
}
    int compareVersion(string version1, string version2) {
        vector<string>data1=getToken(version1);
        vector<string>data2=getToken(version2);
        int i=0;
        while(i<data1.size() || i<data2.size() ){
            int a=i<data1.size() ? stoi(data1[i]) :0;
            int b=i<data2.size() ? stoi(data2[i]) :0;
            if(a>b) return 1;
            else if(a<b) return -1;
            else i++;
        }
        return 0;
    }
};
