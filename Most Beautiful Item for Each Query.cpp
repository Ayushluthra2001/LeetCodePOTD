class Solution {
public:
    int findMax(int x, vector<int>& temp, unordered_map<int, int>& mapping) {
        int start = 0, end = temp.size() - 1;
        int ans = 0;
        
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (temp[mid] > x) {
                end = mid - 1;
            } else {
                ans = max(ans, mapping[temp[mid]]);
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> result;

       
        sort(items.begin(), items.end());
        
       
        unordered_map<int, int> mapping;
        int maxBeauty = 0;
        for (const auto& item : items) {
            int price = item[0];
            int beauty = item[1];
            maxBeauty = max(maxBeauty, beauty);
            mapping[price] = maxBeauty;
        }

       
        vector<int> temp;
        for (const auto& i : mapping) {
            temp.push_back(i.first);
        }
        sort(temp.begin(), temp.end());

       
        for (const int& query : queries) {
            int getMax = findMax(query, temp, mapping);
            result.push_back(getMax);
        }

        return result;
    }
};
