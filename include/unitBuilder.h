#ifndef UNITBUILDER_H
#define UNITBUILDER_H

#include "unit.h"

class unitBuilder{
public:
    void basicBuilder(int price, int absolHP, int movement, unit* newUnit);
    void attackBuilder(unit* unit, int attack);
    void distantBuilder(unit* unit, int distant, int distance);
};

#endif // UNITBUILDER_H
