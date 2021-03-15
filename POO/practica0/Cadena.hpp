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
    //Constructores
    Cadena(char*, unsigned);
    Cadena(char*);
    Cadena(unsigned);
    Cadena();
    Cadena(const Cadena &new_cad); 
    ~Cadena();
    
    //Funciones 
    inline unsigned length()const{
        return tam_;
    };
    inline void show(){
        cout<<s_<<endl;
    };
    char* substr(unsigned, unsigned);
    const char& at(int)const;//Funcion return
    char& at(int);//Funcion modificadora

    //Operadores declarados fuera para poder usar en ambos lados(excepto el =)
    Cadena& operator=(Cadena a);
    Cadena& operator=( char*);
    Cadena& operator+=(Cadena a);
};


#endif