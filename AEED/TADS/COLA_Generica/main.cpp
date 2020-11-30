

#include <iostream>
#include "COLA.h"
int main() {
   COLA<int>ci(4);
    int v[4]={1,2,3,4};
    for (int i = 0; i <ci.size(); ++i) {
        ci.push(v[i]);

    }
    for (int i = 0; i < ci.size(); ++i) {

        cout<<ci.pop()<<", ";

    }
    cout<<endl;
    ci.~COLA();
    return 0;
}
