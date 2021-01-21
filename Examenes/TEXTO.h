// Created by anton on 21/01/2021.
#ifndef EXAMENES_TEXTO_H
#define EXAMENES_TEXTO_H
#include "ListaEnla.h"
#include <string>
#include <bits/stdc++.h>
using namespace std;

typedef struct palabra{
    ListaEnla<char> caracter;
    string p_original;
    int id;
}palabra;

class Texto{
    public:
         Texto();
         void insert_word(palabra);
         static string word_corrector(string);
         void erase_word(int);
         void show_text();
        ~Texto();
    private:
        ListaEnla<palabra> pals;
};

Texto::Texto() {
    //Such emptyness
}

Texto::~Texto() {
    pals.~ListaEnla();
}

void Texto::show_text() {

}

string Texto::word_corrector(string word) {
    string aux;
    bool arr=false;
    int i=word.size();
    i-=1;//Corregir el size ya que la posicion de memoria a recorrer empieza en n-1
    while(i > 0){
        if (word[i]=='@'){
            if(!i){
                aux+="";
            }
            aux+=word[i-1];//No copiamos el elemento anterior, es decir borramos el elemento anterior
            i-=1;
            arr=true;
        }
        if (word[i]=='#'){
            for (int j = 0; j <word.size() ; ++j) {
                word="";//Borramos la linea, es decir la dejamos en blanco
            }
        }
        if ((word[i] != '#') && (word[i] != '@')){
            aux[i]+=word[i];
        }
        i--;
    }
    if (arr){
        reverse(aux.begin(), aux.end());
    }
    return aux;
}

void Texto::insert_word(palabra p) {
    p.p_original = word_corrector(p.p_original); //Corregimos la cadena aplicando la regla de los
    cout<< p.p_original<<endl;
    pals.insertar(p,pals.fin());
}




#endif //EXAMENES_TEXTO_H
