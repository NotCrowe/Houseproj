#include "room.h"

//Make a house class including room objects as built in data
class House{
    public:
        Room r1;
        Room r2;
        Room r3;

        House();
        ~House();

        Room& getRoomData(int i);
};