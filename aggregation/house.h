#include "room.h"
#include "appliance.h"
#include <vector>

//Make a house class including room objects as built in data
class House{
    public:
        Room* r1;
        Room* r2;
        Room* r3;

        std::vector<Appliance> appliances;

        House();
        ~House();

        Room& getRoomData(int i);

        //adds an appliance object
        void addAppliance(Appliance a);
        //removes an appliance object
        void removeAppliance(Appliance a);
        //prints out all appliances in the vector
        std::string printApplianceInfoList();
};