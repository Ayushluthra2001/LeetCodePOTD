class Solution {
public:
   
    int calc(unordered_map<int, int>& mapping, int x) {
   
        priority_queue<pair<int, int>> maxHeap;
        
        
        for (auto entry : mapping) {
            maxHeap.push({entry.second, entry.first});  // {frequency, value}
        }

      
        int sum = 0, count = 0;
        while (!maxHeap.empty() && count < x) {
            auto top = maxHeap.top();  
            maxHeap.pop();
            sum += top.first * top.second;  
            count++;
        }

        return sum;
    }
    
   
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        unordered_map<int, int> mapping;  // To store frequency of elements in the current window
        
        int n = nums.size();
        int i = 0, j = 0;

       
        while (i < k) {
            mapping[nums[i]]++;
            i++;
        }
        
       
        ans.push_back(calc(mapping, x));
        
      
        while (i < n) {
            
            mapping[nums[j]]--;
            if (mapping[nums[j]] == 0) {
                mapping.erase(nums[j]);  
            }

           
            mapping[nums[i]]++;
            
            
            ans.push_back(calc(mapping, x));
            
          
            i++;
            j++;
        }
        
        return ans;
    }
};
