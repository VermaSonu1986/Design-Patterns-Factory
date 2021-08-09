#include "Vehicle.h"
#include <iostream>
using namespace std;
//-------------------------------------------------------

vehicle::vehicle()
{
    cout<< "I am in CTOR of Vehicle class" <<endl;
}

vehicle::~vehicle()
{
    cout<< "I am in DTOR of Vehicle class" <<endl;
}

//-------------------------------------------------------

motorcycle::motorcycle()
{
    cout<< "I am in CTOR of motorcycle class" <<endl;
}

motorcycle::~motorcycle()
{
    cout<< "I am in DTOR of motorcycle class" <<endl;
}

void motorcycle::doRun()
{
    cout<< "I am in ridding motorcycle" <<endl;
}
//-------------------------------------------------------

car::car()
{
    cout<< "I am in CTOR of car class" <<endl;
}

car::~car()
{
    cout<< "I am in DTOR of car class" <<endl;
}

void car::doRun()
{
    cout<< "I am in Driving car" <<endl;
}
