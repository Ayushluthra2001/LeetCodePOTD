class Solution {
public:
bool duplicatate(string curr,string temp){
vector<int>freq(26,0);
for(auto i : curr){
    if(freq[i-'a']>0) return true;
    freq[i-'a']++;
}
for(auto i : temp){
    if(freq[i-'a']>0) return true;
    freq[i-'a']++;
    
}
return false;
   
}
int solve(vector<string>arr,int index,string next){
    if(index>=arr.size()) return next.length();
    
    int inc=0,exc=0;
    if(duplicatate(next,arr[index])){
        exc=solve(arr,index+1,next);
    }else {
        exc=solve(arr,index+1,next);
        inc=solve(arr,index+1,next+arr[index]);
    }
    
    return max(inc,exc);
   
    

    
}
    int maxLength(vector<string>& arr) {
        
        return solve(arr,0,"");
        
    }
};
