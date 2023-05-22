class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> m;
        for(auto a : nums) m[a] ++;
        
        vector <int> res;
        // use priority queue to sort the map by the frequency of the number
        priority_queue<pair<int, int>> que; 
        
        // let first be the frequency of the number
        // let second be the number
        for(auto it= m.begin(); it!= m.end(); it++){
            // use pair function to store each pair of key and value at the map
            que.push(make_pair(it->second, it->first));
            
            if(que.size() > m.size()-k){
                res.push_back(que.top().second);
                que.pop();
            }
        }
        

        return res;
    }
};
