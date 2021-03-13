#include "Cadena.hpp"

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
    for (size_t i = 0; i < sizeof(parser_cad); i++)
    {
        s_[i]=parser_cad[i];
    }
    tam_=sizeof(parser_cad)+1;
    s_[tam_-1]='\0';
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

