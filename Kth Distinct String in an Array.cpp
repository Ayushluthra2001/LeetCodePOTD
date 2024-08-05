class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>freq;
        for(int i=0; i<arr.size();i++){
            freq[arr[i]]++;
        }
        string ans = "";
        int count = 1;
        for(int i=0; i<arr.size();i++){
            if(freq[arr[i]] == 1 ){
                if(count<k){
                    count++;
                }else return arr[i];
            }
        }

        return ans;
    }
};
