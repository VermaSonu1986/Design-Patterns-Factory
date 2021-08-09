#include "Factory.h"
#include "Vehicle.h"

vehicle* factory::createInstance(vType type)
{
    if (type == VEHICLE_CAR)
    {
        return new car;
    }
    else if (type == VEHICLE_MOTORCYCLE)
    {
        return new motorcycle;
    }
    else
    {
        return nullptr;
    }
}

int factory::destroy(vehicle* p)
{
    if (p != nullptr)
    {
        delete p;
        p = nullptr;
        return 0;
    }
    else
    {
        return -1;
    }
}
