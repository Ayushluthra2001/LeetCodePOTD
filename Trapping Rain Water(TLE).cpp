class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        for(int i=0;i<height.size();i++){
            int maxi=height[i];
            int maxi2=height[i];
            for(int j=i-1;j>=0;j--){
                maxi=max(maxi,height[j]);
            }
            for(int j=i+1;j<height.size();j++){
                maxi2=max(maxi2,height[j]);
            }
                
                if(maxi!=-1 && maxi2!=-1)
                ans+=min(maxi,maxi2)-height[i] > 0 ?min(maxi,maxi2)-height[i]:0 ;
            
        }
        return ans;
    }
};
