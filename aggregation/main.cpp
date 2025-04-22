#include "house.h"
#include <iostream>
//normal stuff, don't need to include room since its included with the house header file
using namespace std;

int main(void){

    //declare appliances
    Appliance a1("Oven");
    Appliance a2("Dryer");

    {
    //declare new house
    House h1;

    //loop through all 3 rooms and print out their data
    for(int i = 0; i < 3; i++){
        cout << h1.getRoomData(i).getArea() << " , " << h1.getRoomData(i).getType() << endl;
    }

    //appliance fiddling and demonstration
    h1.addAppliance(a1);
    h1.addAppliance(a2);
    cout << "Appliance List in house: " << h1.printApplianceInfoList() << endl;

    h1.removeAppliance(a1);
    cout << "Appliance List in house: " << h1.printApplianceInfoList() << endl;
    }
    
    //functions and exists after removal
    cout << a1.printInfo() << " still exists!" << endl;
    
    return 0;
}