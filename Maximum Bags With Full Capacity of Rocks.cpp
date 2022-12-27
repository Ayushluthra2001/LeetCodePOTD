class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>v;
        for(int i=0;i<capacity.size();i++){
            v.push_back(capacity[i]-rocks[i]);
        }
        sort(v.begin(),v.end());
        int i=0;
    
        while(i<v.size() && additionalRocks>0){
            additionalRocks-=v[i];
            i++;

        }
        if(additionalRocks<0) return i-1;
        return i;
    }
};
