#ifndef CADENA_HPP
#define CADENA_HPP

#include <iostream>
#include <string.h>
using namespace std;
class Cadena
{
private:
    int error_parser(char *,unsigned);
    void size_auto_assignation(){
        this->tam_=strlen(this->s_);
    }
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
    Cadena(const char*);
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
    inline const char& operator[](size_t i)const{
        return at(i);
    };
    inline bool operator ==(Cadena a){
        return !strcmp(this->s_,a.s_);
    }
    inline bool operator!=(Cadena a){
        return !(*this==a);
    }
    inline bool operator >(Cadena a){
        if (this->tam_ > a.tam_)
            return true;
        else
            return false;
    };
    inline bool operator <(Cadena a){
        return !(*this > a);
    };
    inline bool operator >=(Cadena a){
        return (*this > a)&&(*this==a);
    };
    inline bool operator <=(Cadena a){
        return (*this < a)&&(*this == a);
    };   

    
};
//Funciones
Cadena& operator+(Cadena& a,Cadena& b);


#endif