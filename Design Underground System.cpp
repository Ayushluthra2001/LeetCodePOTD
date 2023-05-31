class UndergroundSystem {
public:
    
    map<int, pair<string, int>> passenger;
    map<string, pair<int, int>> timeTaken;
    
    UndergroundSystem() {
        
        passenger.clear();
        timeTaken.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        
        passenger[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        
        auto values = passenger[id];
        string temp = values.first + "-" + stationName;
        
        timeTaken[temp].first += (t-values.second);
        timeTaken[temp].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        string temp = startStation + "-" + endStation;
        return (double(timeTaken[temp].first) / double(timeTaken[temp].second));
    }
};
