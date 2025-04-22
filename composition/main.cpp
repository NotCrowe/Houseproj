#include "house.h"
#include <iostream>
//normal stuff, don't need to include room since its included with the house header file
using namespace std;

int main(void){

    //declare new house
    House h1;

    //loop through all 3 rooms and print out their data
    for(int i = 0; i < 3; i++){
        cout << h1.getRoomData(i).getArea() << " , " << h1.getRoomData(i).getType() << endl;
    }

    return 0;
}
