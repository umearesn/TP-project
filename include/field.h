#ifndef FIELD_H_INCLUDED
#define FIELD_H_INCLUDED
#include "section.h"
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;


class field{
public:
    Field(int n);
    void getField();
private:
    int fSize;
    vector< vector <section*> > field;
};

#endif // FIELD_H_INCLUDED
