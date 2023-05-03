class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mapping1,mapping2;
        for(int i=0;i<nums1.size();i++){
            mapping1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mapping2[nums2[i]]++;
        }
        vector<vector<int>>ans;
        set<int>temp;
        for(int i=0;i<nums1.size();i++){
            if(mapping2.find(nums1[i])==mapping2.end()){
                temp.insert(nums1[i]);
            }
        }
        vector<int>temp2(temp.begin(),temp.end());

        ans.push_back(temp2);
        temp.clear();
        for(int i=0;i<nums2.size();i++){
            if(mapping1.find(nums2[i])==mapping1.end()){
                
                temp.insert(nums2[i]);
            }
        }
       
        
        vector<int>temp3(temp.begin(),temp.end());
        ans.push_back(temp3);
        return ans;
    }
};
