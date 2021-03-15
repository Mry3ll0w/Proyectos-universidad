#include "Cadena.hpp"
#include <string.h>
using namespace std;
Cadena::Cadena(char* parser_cad, unsigned t)
{
    if (error_parser(parser_cad,t)==-1)
    {
        exit;
    }
    else{
        s_ = new char(t+1);//Asignar size
        for (size_t i = 0; i < t; i++)
        {
            s_[i]=parser_cad[i];
            
        }
        tam_=t+1; 
        s_[t]='\0';
    }
};

Cadena::Cadena(char* parser_cad){
    s_ = new char(sizeof(parser_cad)+1);
    for (size_t i = 0; i < sizeof(parser_cad)+1; i++)
    {
        s_[i]=parser_cad[i];
        
    }
    tam_=sizeof(parser_cad)+1;
    s_[tam_]='\0';
};

inline Cadena::Cadena(unsigned size){
    s_=new char(size+1);
    tam_=size+1;
};

inline Cadena::Cadena(){
    tam_=0;//NO se ha asignado size
};

Cadena::Cadena(const Cadena &new_cad){
    
    this->tam_=new_cad.tam_;
    this->s_ = new char(sizeof(tam_));
    for (size_t i = 0; i < tam_; i++)
    {
        this->s_[i]=new_cad.s_[i];
    }

};

Cadena::~Cadena()
{
    delete s_;//Vaciamos mem
};

int Cadena::error_parser(char *cad, unsigned size){
    
    try
    {
        if (sizeof(cad)>size)
        {
            throw error_handler();
        }
        
    }
    catch(error_handler e)
    {
        e.err();
        return -1;
    }
    return 0;
}

char* Cadena::substr(unsigned inf_limit,unsigned sup_lim){
    if (inf_limit > sup_lim)
    {
        swap(inf_limit,sup_lim);
    }
    if (inf_limit<0 || sup_lim > tam_)
    {
        throw out_of_range("Se ha introducido en la funcion un indice fuera de rango");
    }
    else{
        char* parser_cad;
        parser_cad = new char((sup_lim - inf_limit)+1);
        size_t k =0;
        for (size_t i = inf_limit; i < sup_lim; i++)
        {
            parser_cad[k]=s_[i];
            k++;    
        }
        parser_cad[k]='\0';
        return parser_cad;
    }
   
};

const char& Cadena::at(int i)const{
    if(i < tam_ && i >= 0 ){
        return s_[i];
    }
    else{
        throw out_of_range("Se ha introducido en la funcion un indice fuera de rango");
    }
}

char& Cadena::at(int i){
    if(i < tam_ && i >= 0 ){
        return s_[i];
    }
    else{
        throw out_of_range("Se ha introducido en la funcion un indice fuera de rango");
    }
}

Cadena& Cadena::operator =(Cadena b){
    this->tam_=b.tam_;
    this->s_ = new char(b.tam_);
    for (size_t i = 0; i < b.tam_; i++)
    {
        this->s_[i] = b.s_[i];
    }
    return *this;
}

Cadena& Cadena::operator+=(Cadena a){
    int j=0;
    char *parser_str = new char((this->length()+a.length()+1));//parser char [a+b];
    strcpy(parser_str,this->s_);
    delete this->s_;
    strcat(parser_str,a.s_);
    this->s_ = new char(sizeof(parser_str));
    strcpy(this->s_,parser_str);
    //Falla el sizeof por tanto lo hago por medio del cursor
    this->tam_=0;
    for (size_t i = 0; this->s_[i]!='\0'; i++)
    {
        this->tam_++;
    }
    return *this;
}

Cadena& Cadena::operator=(char* parser_str){
    delete this->s_;
    this->s_ = new char(sizeof(parser_str));
    strcpy(this->s_,parser_str);
    this->tam_=0;
    for (size_t i = 0; this->s_[i]!='\0'; i++)
    {
        this->tam_++;
    }
    
    return *this;
}