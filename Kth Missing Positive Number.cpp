class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>mapping;
        for(int i : arr){
            mapping[i]++;
        }
        int curr=0;
        int ans=0;
        while(k>=0){
            if(mapping[curr]==0){
                k--;
                ans=curr;
            }
            curr++;
        }
        return ans;
    }
};

