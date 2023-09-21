class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(),ans.end());
       
            int mid=ans.size()/2;
            if(ans.size()%2!=0) return ans[mid];
           
     double m=ans[mid]+ans[mid-1];
            return m/2;
    }
};
