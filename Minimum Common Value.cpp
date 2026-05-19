class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0;


        while( i < nums1.size() && j < nums2.size()){
            while( j< nums2.size() && i < nums1.size() && nums1[i]> nums2[j]) j++;
            while( i < nums1.size() && j< nums2.size() && nums2[j]>nums1[i]) i++;
            if(i>=nums1.size() || j>=nums2.size()) return -1;
            if(nums1[i] == nums2[j]) return nums2[j];
            
        }

        return -1;
    }
};
