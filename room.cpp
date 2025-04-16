#include "room.h"

//just some method stuff
Room::Room() : area(50), type(Bedroom) {}
Room::Room(float a, rtype t) : area(a), type(t) {}
float Room::getArea(){return area;}
rtype Room::getType(){return type;}