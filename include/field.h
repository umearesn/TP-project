#ifndef FIELD_H_INCLUDED
#define FIELD_H_INCLUDED
#include "section.h"
#include <cstdlib>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;


class field{
public:
    Field(int n);
    void getField();
    //vector< pair<int, int> >* DFS(int startX, int startY, int finishX, int finishY);
    void testUnit(unit* u);
private:
    int fSize;
    vector< vector <section*> > field;
    vector< vector<int> > dist;
};

#endif // FIELD_H_INCLUDED
