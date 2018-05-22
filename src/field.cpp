#include "field.h"
using namespace std;

field::Field(int n) {
    fSize = n;
    vector<section*> temp(fSize);
    for(int i = 0; i < fSize; i++) {
        field.push_back(temp);
        for(int j = 0; j < fSize; j++) {
            field[i][j] = section::createRandSection();
        }
    }
}

void field::getField(){
    for(int i = 0; i < fSize; i++){
        for(int j = 0; j < fSize; j++) {
            cout << field[i][j]->getSym();
        }
        cout << endl;
    }
}
