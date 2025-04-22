#include "appliance.h"

//returns name
Appliance::Appliance(std::string n) : name(n) {}
std::string Appliance::printInfo(){
    return name;
}