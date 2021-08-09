#pragma once

enum Type {
    VEHICLE_DUMMY,
    VEHICLE_MOTORCYCLE,
    VEHICLE_CAR,
    VEHICLE_MAX = 0xFFFF
};
typedef enum Type vType;

class factory;

class vehicle
{
    friend class factory;
protected:
    vehicle();
    virtual ~vehicle();
public:
    virtual void doRun()=0;
};

class motorcycle : public vehicle
{
    friend class factory;
protected:
    motorcycle();
    virtual ~motorcycle();
public:
   virtual void doRun();
};

class car : public vehicle
{
    friend class factory;
protected:
    car();
    virtual ~car();
public:
    virtual void doRun();
};
