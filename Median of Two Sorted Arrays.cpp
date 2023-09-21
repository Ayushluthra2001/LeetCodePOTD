class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i=0,j=0;
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]>nums2[j]){
                ans.push_back(nums2[j++]);
            }else{
                ans.push_back(nums1[i++]);
            }
        }
        while(i<nums1.size()) ans.push_back(nums1[i++]);
        while(j<nums2.size()) ans.push_back(nums2[j++]);
            int mid=ans.size()/2;
            if(ans.size()%2!=0) return ans[mid];
           
     double m=ans[mid]+ans[mid-1];
            return m/2;
    }
};
