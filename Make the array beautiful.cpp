class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
      
        if(arr.size() == 2) {
            if(arr[0]>=0 && arr[1]>=0) return arr;
            else if(arr[0] < 0 && arr[1] < 0) return arr;
            else return {};
        }
        int j = 0;
        vector<int>ans;
        // while(j && j+1< arr.size()){
        //     if(arr[j]>=0 && arr[j+1] >=0){
        //         ans.push_back(arr[j]);
        //         ans.push_back(arr[j+1]);
        //         j+=2;
        //     }else if(arr[j]<0 && arr[j+1]<0)
        //     {
        //         ans.push_back(arr[j]);
        //         ans.push_back(arr[j+1]);
        //         j+=2;
        //     }else{
        //         j++;
        //     }
        // }
        
        stack<int>s;
        while(j < arr.size()){
            
            if(s.size() >=1){
                if(s.top() >=0 && arr[j]>=0){
                    s.push(arr[j]);
                    j++;
                }else if(s.top() < 0  && arr[j]<0) {
                    s.push(arr[j]);
                    j++;
                }
                else {
                    
                    s.pop();
                    j++;
                }
            }else{
                s.push(arr[j++]);
            }
        }
        // cout<<s.size()<<endl;
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
