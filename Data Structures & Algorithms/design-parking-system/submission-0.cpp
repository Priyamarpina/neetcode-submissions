class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        availableSpaces.clear();
        availableSpaces.push_back(big);
        availableSpaces.push_back(medium);
        availableSpaces.push_back(small);
    }
    bool addCar(int carType) {
        if(availableSpaces[carType-1]>0){
            availableSpaces[carType-1]--;
            return true;
        }
        return false;
    }
    vector<int> availableSpaces;
};
