class ParkingSystem {
public:
    map<int,int>mapping;
    ParkingSystem(int big, int medium, int small) {
        mapping[1]=big;
        mapping[2]=medium;
        mapping[3]=small;
    }
    
    bool addCar(int carType) {
        if(mapping[carType]>0) {
            mapping[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
