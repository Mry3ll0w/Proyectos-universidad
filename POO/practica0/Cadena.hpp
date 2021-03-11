#ifndef CADENA_HPP
#define CADENA_HPP

#include <iostream>
using namespace std;
class Cadena
{
private:
    int error_parser();
    char *cad;unsigned size;
public:
    class error_handler{
        public:
            error_handler();
            void err(){
                cout<<"Contruccion de la cadena es erroneo, revise los datos introducidos"<<endl;
                exit;
            };
            ~error_handler();
        private:
            
    };
    Cadena(char* s_, unsigned tam_);
    inline void show(){
        cout<<cad<<endl;
    };
    ~Cadena();
};


#endif