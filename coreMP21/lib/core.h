//
// Created by anton on 12/02/2021.
//

#ifndef COREMP21_CORE_H
#define COREMP21_CORE_H

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Globals
FILE *db;
typedef struct{
    char code[5];//de maximo 5 digitos
    char *nombre;//maximo 20
    char estado; //BOOL T o F
    int position; //To make it easier to erase/mod data
}example;

int total_obj=2,update_check=0;
char buffer[30];
example ex[2];

void assign_data(const char buffer[30], example param);
void data_recover();
int existence_checker();

void data_recover(){
    db=fopen("data/database.txt","r");
    assert(db!=NULL);
    for (int i = 0; i < total_obj ; ++i) {
        fscanf(db,"%s",buffer);
        assign_data(buffer,ex[i]);
    }
    update_check=1;
}

void assign_data(const char buffer[30], example param) {
    static int pos=0;
    int slash_finder[2],k=0,slash_cursor=0;
    for (int i = 0; i <30 ; ++i) {
        if ( buffer[i]=='/'){
            slash_finder[slash_cursor]=i;
            for (int j = i+1; k < 5 ; ++j) {
                param.code[k]=buffer[j];
                k++;
            }
            slash_cursor++;
        }
    }
    param.nombre=(char*)malloc(slash_finder[0]*sizeof(int));
    for (int i = 0; i < slash_finder[0] ; ++i) {
        param.nombre[i]=buffer[i];
    }
    param.estado=buffer[slash_finder[1]+1];//Always located in the last position of the string
    param.position=pos;
    pos++;
    printf("Name: %s\n",param.nombre);
    printf("Code: %s\n",param.code);
    printf("Status: %c\n",param.estado);
    printf("position: %i\n\n",param.position);
    free(param.nombre);
}

//if only wanna use one parameter leave them empty and pos -1==> "pepe","",-1
int existence_checker(char nombre[],char code[],int pos){
    assert(update_check==1);//If the data has been charged
    for (int i = 0; i < total_obj ; ++i) {
        if(strcmp(nombre,"")!=0&&strcmp(ex[i].nombre,nombre)==0){
            return ex[i].position;//Does exists
            exit;
        }
        else if (strcmp(code,"")!=0&&strcmp(ex[i].code,code)==0){
            return ex[i].position;
            exit;
        }
        else if (pos==ex[i].position){
            return ex[i].position;
            exit;
        }
    }
    return -1;
}

#endif //COREMP21_CORE_H
