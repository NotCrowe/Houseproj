#include "house.h"

//make house with the rooms
House::House() : r1(new Room(120, LivingRoom)), r2(new Room(80, Kitchen)), r3(new Room(60, Bedroom)){}
House::~House(){
    //Make sure rooms on heap are deleted when house is deleted
    delete r1, r2, r3;
}

//Get a room from the house, index 0
Room& House::getRoomData(int i){
    switch(i){
        case 0:
            return *r1;
            break;
        case 1:
            return *r2;
            break;
        case 2:
            return *r3;
            break;
        default:
            return *r1;
    }
}

void House::addAppliance(Appliance a){
    appliances.push_back(a);
}
void House::removeAppliance(Appliance a){
    std::vector<Appliance> newap;
    for(int i=0;i<appliances.size();i++){
        if(appliances[i].printInfo() != a.name){
            newap.push_back(appliances[i]);
        }
    }
    appliances = newap;
}
std::string House::printApplianceInfoList(){
    std::string text;
    for(Appliance a : appliances){
        text += a.printInfo() + ", ";
    }
    return text;
}