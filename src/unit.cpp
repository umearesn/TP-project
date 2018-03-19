#include "unit.h"
#include <algorithm>
#include <iostream>

unit::unit(unitType type) : _type(type) {}

unitType unit::getType()
{
    return(_type);
}

bool unit::updateHPandAttack(int causedDamage) {
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
}

Archer::Archer() : unit(unitType::uArcher) {
    price = 15;
    curHP = 25;
    absolHP = 25;
    attackPower = 2;
    distantAttack = 10;
    movement = 2;
    experience = 0;
}

Horseman::Horseman() : unit(unitType::uHorseman) {
    price = 20;
    curHP = 40;
    absolHP = 40;
    attackPower = 12;
    distantAttack = 0;
    movement = 5;
    experience = 0;
}

Warrior::Warrior() : unit(unitType::uWarrior) {
    price = 10;
    curHP = 5;
    absolHP = 5;
    attackPower = 8;
    distantAttack = 0;
    movement = 2;
    experience = 0;
};

Scout::Scout() : unit(unitType::uScout) {
    price = 5;
    curHP = 15;
    absolHP = 15;
    attackPower = 2;
    distantAttack = 0;
    movement = 7;
    experience = 0;
};
