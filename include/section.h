#ifndef SECTION_H_INCLUDED
#define SECTION_H_INCLUDED
#include <random>
#include "unit.h"
using namespace std;

enum class sectionType {
    sWater,
    sPlain,
    sForest,
    sHill,
    sMount
};

//паттерн фабричный метод
class section{
public:
    static section* createSection(sectionType _type);
    static section* createRandSection();
    char getSym();
    char getUnit();
    void setUnit(unit* u);
    int getEnReq();
protected:
    //bool isOccupied = false;
    unit* unitHere = nullptr;
    sectionType _type;
    char sym;
    bool isPassable;
    int energyReq;
};

class Water : public section {
public:
    Water();
};

class Mount : public section {
public:
    Mount();
};

class Plain : public section {
public:
    Plain();
};

class Forest : public section {
public:
    Forest();
};

class Hill : public section {
public:
    Hill();
};


#endif // SECTION_H_INCLUDED
