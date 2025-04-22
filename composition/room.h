//An enum to make roomtype easier, 0 = livingroom, 1 = kitchen, 2 = bedroom
enum rtype{
    LivingRoom,
    Kitchen,
    Bedroom
};

//Room class which includes area and type as data
class Room{
    private:
        float area;
        rtype type;
    public:
        Room();
        Room(float a, rtype t);

        float getArea();
        rtype getType();
};
