class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        vector<int>prefix(height.size(),0),suffix(height.size(),0);
        int pre=0,suf=0;
        for(int i=0;i<height.size();i++){
            pre=max(pre,height[i]);
            suf=max(suf,height[height.size()-i-1]);
            prefix[i]=pre;
            suffix[height.size()-i-1]=suf;
            
        } 
        for(int i=0;i<height.size();i++){
            ans+=min(prefix[i],suffix[i])-height[i];
        }
        return ans;
    }
};
