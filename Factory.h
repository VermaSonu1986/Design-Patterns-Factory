#include "Vehicle.h"

class factory
{
    public:
    static vehicle * createInstance(vType );
    static int destroy(vehicle*);
};
