//#include <iostream>
#include "unitActions.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Archer a;
    Archer b;
    //a.updateHPandAttack(b.distantAttack);
    //cout << a.curHP << " " << b.curHP;
    distAttack(&a, &b);
    cout << a.getHP() << " " << b.getHP();
    return 0;
}
