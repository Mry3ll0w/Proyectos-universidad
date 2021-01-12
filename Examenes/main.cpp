#include <iostream>
#include "HOSPITAL.h"
#include "Cocina.h"
#include "TREN.h"
using namespace std;
int n_aleatorio(int a, int b){

    return (rand()%(b-a+1)+a);

}

int main() {
    wagon vagon[3];
    Tren trenecito;
    vagon[0].ID=1;vagon[1].ID=2;vagon[2].ID=3;
    cout<< trenecito.empty() <<endl;
    trenecito.insert_wagon(vagon[0]);
    trenecito.insert_wagon(vagon[1]);
    trenecito.insert_wagon(vagon[2]);
    trenecito.erase_active();
    return 0;
}
