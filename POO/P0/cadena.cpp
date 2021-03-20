#include "cadena.hpp"
#include <string.h>
using namespace std;
Cadena::Cadena(char parser_chr, unsigned t)
{
    
    s_ = new char(t+1);//Asignar size
    tam_=t; 
    for (size_t i = 0; i <tam_ ; i++)
    {
       s_[i]=parser_chr;
    }        
    s_[tam_]='\0';
    
    try
    {
       if (error_parser(s_,tam_)==-1)
       {
           throw error_handler();
       }
    }
    catch(error_handler e){
            e.err();
        }
};

Cadena::Cadena(const char parser_cad[]){
    s_ = new char(strlen(parser_cad)+1);
    tam_=strlen(parser_cad);
    s_=strdup(parser_cad);

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
    delete []this->s_;
    this->s_ = new char(strlen(new_cad.s_)+1);
    this->s_=strdup(new_cad.s_);

};

Cadena::~Cadena()
{
    tam_=0;
    delete[] s_;//Vaciamos mem
};

int Cadena::error_parser(const char cad[], unsigned size){
    
    try
    {
        if (strlen(cad)>size+1)
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

Cadena Cadena::substr(unsigned inf_limit,unsigned sup_lim){
    if (inf_limit > sup_lim)
    {
        swap(inf_limit,sup_lim);
    }
    if (inf_limit<0 || sup_lim > tam_)
    {
        throw out_of_range("Se ha introducido en la funcion un indice fuera de rango");
    }
    else{
        
       Cadena a((sup_lim - inf_limit)+1);
        size_t k =0;
        for (size_t i = inf_limit; i < sup_lim; i++)
        {
            a[k]=s_[i];
            k++;    
        }
        return a;
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
    delete []this->s_;
    this->s_ = new char[strlen(b.s_)+1];
    strcpy(this->s_, b.s_);
    return *this;
}

Cadena& Cadena::operator+=(Cadena a){
    int j=0;
    char *parser_str = new char((this->length()+a.length()));//parser char [a+b];
    parser_str=strdup(this->s_);
    delete this->s_;
    strcat(parser_str,a.s_);
    this->s_ = new char(strlen(parser_str));
    this->s_=strdup(parser_str);
    //Falla el strlen por tanto lo hago por medio del cursor
    size_auto_assignation();
    delete parser_str;
    return *this;
}

Cadena& Cadena::operator=( const char parser_str[]){
    delete []this->s_;
    this->s_ = new char(strlen(parser_str));
    this->s_=strdup(parser_str);
    size_auto_assignation();
    
    return *this;
}

Cadena& operator+(Cadena& a, Cadena& b){
    a+=b;
    return a;
}