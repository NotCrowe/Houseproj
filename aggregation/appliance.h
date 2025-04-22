#include <string>

//Appliance class as an aggregate
class Appliance{
    public:
        std::string name;

        Appliance(std::string n);

        //returns name
        std::string printInfo();
};