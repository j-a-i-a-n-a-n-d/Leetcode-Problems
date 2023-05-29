class ParkingSystem {
public:
    int big=0,medium = 0,small =0;
    ParkingSystem(int big,int medium,int small) : big(big) , medium(medium) , small(small) {}
    bool addCar(int carType) 
    {
        if (carType==1 && big-1>=0){big--;return true;}
        if (carType==2 && medium-1>=0){medium--;return true;}
        if (carType==3 && small-1>=0){small--;return true;}
        
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */