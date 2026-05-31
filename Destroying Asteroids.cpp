class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long int mass = m;
        if(asteroids[0] > mass) return false;

        for(int i =0; i<asteroids.size(); i++){
            if(asteroids[i] > mass) return false;
            mass+=asteroids[i];
        }

        return true;
    }
};
