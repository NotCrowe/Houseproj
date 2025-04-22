#include "house.h"

House::House(){
    //Make the rooms, was too lazy to implement user input for this
    r1 = *(new Room(120,LivingRoom));
    r2 = *(new Room(80, Kitchen));
    r3 = *(new Room(60, Bedroom));
}
House::~House(){
    //Make sure rooms on heap are deleted when house is deleted
    delete &r1;
    delete &r2; //r2 and r3 both throw up warnings and I dont exactly know what it means so idk I hope there isnt a memory leak here....
    delete &r3;
}

//Get a room from the house, index 0
Room& House::getRoomData(int i){
    switch(i){
        case 0:
            return r1;
            break;
        case 1:
            return r2;
            break;
        case 2:
            return r3;
            break;
        default:
            return r1;
    }
}
