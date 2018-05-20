#include "field.h"

Water::Water() : section(sectionType::sWater) {
    isPassable = false;
    int energyReq = 100500;
}

Mount::Mount() : section(sectionType::sMount) {
    isPassable = false;
    int energyReq = 100500;
}

Plain::Plain() : section(sectionType::sPlain) {
    isPassable = true;
    int energyReq = 2;
}

Forest::Forest() : section(sectionType::sForest) {
    isPassable = true;
    int energyReq = 4;
}

Hill::Hill() : section(sectionType::sHill) {
    isPassable = true;
    int energyReq = 4;
}

field::Field(){
    int type = 0;
    for(int i = 0; i < fSize; i++) {

        for(int j = 0; j < fSize; j++) {
            type = rand() % 5;
            switch(type){
                case(0):
                    new section newSec = Water();
                case(1):
                    new section newSec = Mount();
                case(2):
                    new section newSec = Plain();
                case(3):
                    new section newSec = Forest();
                case(4):
                    new section newSec = Hill();
            }
            field[i][j] = newSec;
        }
    }
}

