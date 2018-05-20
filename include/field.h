#ifndef FIELD_H_INCLUDED
#define FIELD_H_INCLUDED
#include <cstdlib>
#include <vector>
using namespace std;

enum class sectionType {
    sWater,
    sPlain,
    sForest,
    sHill,
    sMount
};

class section{
public:
    section(sectionType _type);
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

class field{
public:
    Field();
protected:
    const int fSize = 100;
    vector< vector <section> > field (fSize, vector<section> (fSize));
};

#endif // FIELD_H_INCLUDED
