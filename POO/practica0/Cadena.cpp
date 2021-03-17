#include "Cadena.hpp"
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
    
    if (error_parser(s_,tam_)==-1)
    {
        exit;
    }
    
};

Cadena::Cadena(const char* parser_cad){
    s_ = new char(strlen(parser_cad)+1);
    tam_=strlen(parser_cad);
    strcpy(s_,parser_cad);

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
    delete this->s_;
    this->s_ = new char(strlen(new_cad.s_)+1);
    strcpy(this->s_,new_cad.s_);

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
    delete this->s_;
    this->s_ = new char(b.tam_);
    strcpy(this->s_,b.s_);
    return *this;
}

Cadena& Cadena::operator+=(Cadena a){
    int j=0;
    char *parser_str = new char((this->length()+a.length()));//parser char [a+b];
    strcpy(parser_str,this->s_);
    delete this->s_;
    strcat(parser_str,a.s_);
    this->s_ = new char(sizeof(parser_str));
    strcpy(this->s_,parser_str);
    //Falla el sizeof por tanto lo hago por medio del cursor
    size_auto_assignation();
    return *this;
}

Cadena& Cadena::operator=(char* parser_str){
    delete this->s_;
    this->s_ = new char(sizeof(parser_str));
    strcpy(this->s_,parser_str);
    size_auto_assignation();
    
    return *this;
}

Cadena& operator+(Cadena& a, Cadena& b){
    a+=b;
    return a;
}