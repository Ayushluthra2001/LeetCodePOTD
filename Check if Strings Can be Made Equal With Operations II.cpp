class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>arr1(26,0);
        vector<int>arr2(26,0);

        for(int i =0; i<s1.length(); i+=2){
            arr1[s1[i]-'a']++;
        }
        for(int i =0; i<s2.length(); i+=2){
            arr1[s2[i]-'a']--;
        }

        for(int i=1;i<s1.length(); i+=2){
           // cout<<s2[i]<<" "<<s2[i]-'a'<<" ,";
             arr2[s1[i]-'a']++;
        }
        cout<<endl;
        for(int i=1;i<s2.length(); i+=2){
            arr2[s2[i]-'a']--;
        }

        for(int i = 0; i<26;i++){
           // cout<<arr1[i]<<" "<<arr2[i]<<endl;
            if(arr1[i] != 0 || arr2[i] != 0) return false;
        }

        return true;
    }
};
