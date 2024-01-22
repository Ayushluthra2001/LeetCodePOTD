class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mapping;
        for(auto i : nums)
            mapping[i]++;
        int first,second=-1;
        int k=1;
        for(auto i : mapping){
            
            if(i.second==2) first=i.first;
            //cout<<i.first<<" "<<k<<endl;
            if(i.first!=k && second==-1) second=k;
            k++;
        }
        if(second==-1) second=k;
        return {first,second};
    }
};
