#ifndef SECTION_H_INCLUDED
#define SECTION_H_INCLUDED
#include <random>
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
protected:
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
