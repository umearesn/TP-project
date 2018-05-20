#ifndef UNIT_H
#define UNIT_H
#include <iostream>

enum class unitType {
    uArcher,
    uSpearhead,
    uHorseman,
    uWarrior,
    uScout,
};

class unit{
public:
    unit(unitType _type);
    unitType getType();
    bool updateHPandAttack(int causedDamage);
    int getDistAttack();
    int getCloseAttack();
    int getHP();
    bool getDefence();
    //void closeAttack(unit* aim);
    //void distAttack(unit* aim);

protected:
    int price;
    int absolHP;
    int movement;
    int curHP = absolHP;
    int attackPower;
    int distantAttack;
    int distance;
    int energy = movement;
    unitType _type;
    int experience = 0;
    bool defence = false; //îò çíà÷åíèÿ äàííîãî ôëàøà áóäåò çàâèñåòü ïîëó÷àåìûé óðîí - äîðàáîòàþ ïîòîì
};


class Archer : public unit {
public:
    Archer();
};


class Spearhead : public unit {
public:
    Spearhead();
};


class Horseman : public unit {
public:
    Horseman();
};


class Warrior : public unit {
public:
    Warrior();
};


class Scout : public unit {
public:
    Scout();
};

#endif // UNIT_H
