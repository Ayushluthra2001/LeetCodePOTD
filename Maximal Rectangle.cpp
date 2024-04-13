class Solution {
public:
vector<int>nextSmallest(vector<int>& arr , int n){
        vector<int>ans(n,0);
        ans[n-1] = -1;
        stack<int>st;
        st.push(n-1);
        for(int i=n-2; i>=0; i--){
            while(!st.empty() && st.top()!=-1 && arr[st.top()] >= arr[i]) st.pop();
            if(!st.empty()) {
                ans[i] = st.top();
                st.push(i);
            }else{
                st.push(i);
                ans[i]=-1;
            }
        }
        return ans;
    }
    vector<int>prevSmallest(vector<int>& heights, int n){
        vector<int>ans(n,0);
        ans[0]=-1;
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++){
            while( !st.empty() && st.top()!=-1 && heights[st.top()] >= heights[i]) st.pop();
            if( !st.empty() ){
                ans[i]=st.top();
                st.push(i);
            }else{
                st.push(i);
                ans[i]= -1;
            }
        }
        return ans;
    }
     int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nextSmallestElement=nextSmallest(heights,n);
        vector<int>prevSmallestElement=prevSmallest(heights,n);
        int maxArea=0;
        // for(auto i : nextSmallestElement){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i : prevSmallestElement){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<heights.size();i++){
            if(nextSmallestElement[i]==-1) nextSmallestElement[i]=n;
            int width=nextSmallestElement[i]-prevSmallestElement[i]-1;
            int length=heights[i];
           
            int area=width*length;
            maxArea=max(maxArea,area);
        }
        
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxi=0;
        vector<int>histogram(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<histogram.size();j++){
                if(matrix[i][j]=='1') histogram[j]++;
                else histogram[j]=0;
            }
            maxi=max(maxi,largestRectangleArea(histogram));
        }
        return maxi;   
    }
};
