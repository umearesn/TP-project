#include "unitActions.h"

bool distAttack(unit* attacker, unit* attacked) {
    bool result = false;
    if(attacked->getDefence()) {
        result = attacked->updateHPandAttack(0.75 * attacker->getDistAttack());
    } else {
        result = attacked->updateHPandAttack(attacker->getDistAttack());
    }
    return result;
}

pair<bool, bool> closeAttack(unit* attacker, unit* attacked) {
    bool attackerRes = false, attackedRes = false;
    int attackerPower = attacker->getCloseAttack();
    int defenderPower = 0.25 * max(attacked->getDistAttack(), attacked->getCloseAttack());
    if(attacked->getDefence()) {
        attackedRes = attacked->updateHPandAttack(0.75 * attackerPower);
    } else {
        attackedRes = attacked->updateHPandAttack(attackerPower);
    }
    attackerRes = attacker->updateHPandAttack(defenderPower);
    return make_pair(attackerRes, attackedRes);
}
