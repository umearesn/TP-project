#ifndef UNITINTERACTION_H_INCLUDED
#define UNITINTERACTION_H_INCLUDED
#include "unit.h"
#include <utility>
using namespace std;

bool distAttack(unit* attacker, unit* attacked);

pair<bool, bool> closeAttack(unit* attacker, unit* attacked);



#endif // UNITINTERACTION_H_INCLUDED
/*bool unit::updateHPandAttack(int causedDamage) {
    bool isDestroyed = false;
    curHP = std::max(0, curHP - causedDamage);
    if(curHP == 0) {
        std::cout << "Unit destroyed!\n";
        isDestroyed = true;
    } else {
        attackPower = std::max((int) (attackPower * (double) (curHP / absolHP)), 1);
        distantAttack = std::max((int) (distantAttack * (double) (curHP / absolHP)), 1);
    }
    return isDestroyed;
}*/

/*
void unit::distAttack(unit* aim) {
    //std::cout << distantAttack << std::endl;
    if(aim->defence) {
        aim->updateHPandAttack(0.75 * distantAttack);
    } else {
        aim->updateHPandAttack(distantAttack);
    }
}

void unit::closeAttack(unit* aim) {
    //std::cout << distantAttack << std::endl;
    int attackerPower = attackPower;
    int defenderPower = 0.25 * aim->attackPower;
    if(aim->defence) {
        aim->updateHPandAttack(0.75 * distantAttack);
    } else {
        aim->updateHPandAttack(distantAttack);
    }
}
*/
