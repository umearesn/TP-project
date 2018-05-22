//#include <iostream>
#include "unitActions.h"
#include "field.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Archer a;
    Archer b;
    //distAttack(&a, &b);
    cout << a.getHP() << " " << b.getHP();
    cout << endl << endl << "///////////////////////////////////////////////////" << endl << endl;
    field f;
    f.Field(10);
    f.testUnit(&a);
    f.getField();
    return 0;
}
