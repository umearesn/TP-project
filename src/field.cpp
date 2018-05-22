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
    cout << setw(8) << "";
    for(int i = 0; i < fSize; i++){
        cout << setw(8) << i;
    }
    cout << endl;
    for(int i = 0; i < fSize; i++){
        cout << setw(8) << i;
        for(int j = 0; j < fSize; j++) {
            cout << setw(3) << "(" << field[i][j]->getSym() << ", " << field[i][j]->getUnit() << ")";
        }
        cout << endl;
    }
}

void field::testUnit(unit* u) {
    field[5][4]->setUnit(u);
}

/*
vector< pair<int, int> >* field::DFS(int startX, int startY, int finishX, int finishY){
    vector< pair<int, int> > path;
    for( int i = 0; i <=)
}
*/
