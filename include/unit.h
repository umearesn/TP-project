#ifndef UNIT_H
#define UNIT_H

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

protected:
    int price;
    int absolHP;
    int curHP;
    int attackPower;
    int distantAttack;
    int distance;
    int movement;
    unitType _type;
    int experience = 0;
    bool defence = false; //от значения данного флаша будет зависеть получаемый урон - доработаю потом
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
