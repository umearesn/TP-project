#include "section.h"
using namespace std;

section* section::createSection( sectionType _type ) {
    section* res;
    switch(_type) {
        case sectionType::sWater:
            res = new Water();
            break;
        case sectionType::sMount:
            res = new Mount();
            break;
        case sectionType::sPlain:
            res = new Plain();
            break;
        case sectionType::sForest:
            res = new Forest();
            break;
        case sectionType::sHill:
            res = new Hill();
            break;
    }
    return res;
}

char section::getSym(){
    return sym;
}

section* section::createRandSection(){
    section* res;
    int key = rand() % 5;
    switch(key){
        case 0:
            res = createSection(sectionType::sWater);
            break;
        case 1:
            res = createSection(sectionType::sMount);
            break;
        case 2:
            res = createSection(sectionType::sPlain);
            break;
        case 3:
            res = createSection(sectionType::sForest);
            break;
        case 4:
            res = createSection(sectionType::sHill);
            break;
    }
    return res;
}



Water::Water(){
    _type = sectionType::sWater;
    isPassable = false;
    energyReq = 100500;
    sym = 'W';
}

Mount::Mount(){
    _type = sectionType::sMount;
    isPassable = false;
    energyReq = 100500;
    sym = 'M';
}

Plain::Plain(){
    _type = sectionType::sPlain;
    isPassable = true;
    energyReq = 2;
    sym = 'P';
}

Forest::Forest(){
    _type = sectionType::sForest;
    isPassable = true;
    energyReq = 4;
    sym = 'F';
}

Hill::Hill(){
    _type = sectionType::sHill;
    isPassable = true;
    energyReq = 4;
    sym = 'H';
}
