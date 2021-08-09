/*
    Factory Design Patterns
    Factory class is base class that can be instantiated multiple type
*/

#include <iostream>
#include "Vehicle.h"
#include "Factory.h"
using namespace std;

int main()
{
    int result = 0;
    vehicle * InstaceCar = factory::createInstance(VEHICLE_CAR);
    InstaceCar->doRun();
    vehicle * InstaceMotor = factory::createInstance(VEHICLE_MOTORCYCLE);
    InstaceMotor->doRun();

    cout<< "Car and Motorcycle Instance created"<< endl <<endl;
    result = factory::destroy(InstaceCar);
    result = factory::destroy(InstaceMotor);
    if (result == 0)
    {
        cout<< "Object Destroyed"<<endl;
    }

    return 0;
}
