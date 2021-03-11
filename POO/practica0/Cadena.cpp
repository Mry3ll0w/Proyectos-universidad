#include "Cadena.hpp"

using namespace std;
Cadena::Cadena(char* parser_cad, unsigned t)
{
    if (error_parser()==-1)
    {
        exit;
    }
    else{
        cad = new char(t);//Asignar size
        size =t; 
    }
    
    
};

Cadena::~Cadena()
{
    delete cad;//Vaciamos mem
};

int Cadena::error_parser(){
    Cadena::error_handler aux;
    try
    {
        if (sizeof(cad)>size)
        {
            throw aux;
        }
        
    }
    catch(Cadena::error_handler e)
    {
        e.err();
        return -1;
    }
    return 0;
}

