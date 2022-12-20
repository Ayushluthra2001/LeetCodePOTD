class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n+1,false);
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(visited[node]==false){
                vector<int>room=rooms[node];
                visited[node]=true;
                for(int i=0;i<room.size();i++){
                    q.push(room[i]);
                }
            }
            
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false) return false;
        }
        return true;
    }
};
