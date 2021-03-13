#ifndef CADENA_HPP
#define CADENA_HPP

#include <iostream>
using namespace std;
class Cadena
{
private:
    int error_parser(char *,unsigned);
    char *s_;unsigned tam_;
    class error_handler{
        public:
            void err(){
                cout<<"Contruccion de la cadena es erroneo, revise los datos introducidos"<<endl;
                exit;
            };
        private:
            
    };
public:
    
    Cadena(char*, unsigned);
    Cadena(char*);
    inline void show(){
        cout<<s_<<endl;
    };
    ~Cadena();
};


#endif